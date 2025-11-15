#include <iostream>
#include <fstream>  
#include <string>

using namespace std;

int main() {
    string sourceFile, destFile;

    cout << "Enter source file name: ";
    cin >> sourceFile;

    cout << "Enter destination file name: ";
    cin >> destFile;

    ifstream src(sourceFile);
    if (!src) {
        cerr << "Error: Cannot open source file!" << endl;
        return 1;
    }

    ofstream dest(destFile);
    if (!dest) {
        cerr << "Error: Cannot open destination file!" << endl;
        return 1;
    }

    string line;
    while (getline(src, line)) {
        dest << line << endl;
    }

    cout << "File copied successfully!" << endl;

    src.close();
    dest.close();

    return 0;
}
