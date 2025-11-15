#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
    int id;
    string name;
public:
    Student() { id = 0; name = ""; }
    Student(int i, string n) { id = i; name = n; }

    // Input function
    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore(); // Ignore newline after ID input
        cout << "Enter Name: ";
        getline(cin, name);
    }

    // Display function
    void display() const {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    // File write (binary mode)
    void writeToFile(ofstream &out) {
        out.write((char*)this, sizeof(Student));
    }

    // File read (binary mode)
    void readFromFile(ifstream &in) {
        in.read((char*)this, sizeof(Student));
    }
};
int main() {
    int n;
    cout << "How many students do you want to enter? ";
    cin >> n;

    Student s;
    ofstream outFile("students.dat", ios::binary); // Open for writing in binary mode
    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

    // Input and write student objects to file
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        s.input();
        s.writeToFile(outFile);
    }
    outFile.close();

    cout << "\nReading student records from file:\n";
    ifstream inFile("students.dat", ios::binary); // Open for reading in binary mode
    if (!inFile) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    // Read and display student objects from file
    while (inFile.read((char*)&s, sizeof(Student))) {
        s.display();
    }

    inFile.close();

    return 0;
}

