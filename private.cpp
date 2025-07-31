#include <iostream>
#include <string>
using namespace std;
// This code demonstrates encapsulation in C++ by using private attributes and public methods to access them.
// The teacher class has private attributes and public methods to set and get the salary.
// The salary attribute is set using a private setter method, and retrieved using a public getter method.
// The main function demonstrates creating an object of the teacher class, setting the salary, and retrieving it. and it helps in the concept of data hiding and encapsulation.


class teacher {


    private:
    double salary;
    public:
    string name;
    string subject;
    string dpt;
    void setSalary(double newSalary) {
        salary = newSalary;
    }
    double getSalary() const {
        return salary;
    }




};
int main() {
    teacher t1;
    t1.name="ankita";
    t1.subject="cse";   
    t1.setSalary(20000);
    t1.dpt="cse";
    cout << t1.name << endl;
    double newSalary = 780932;
    t1.setSalary(newSalary);
    cout << t1.getSalary() << endl;
    return 0;

}