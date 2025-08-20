#include <iostream>

using namespace std;

class teacher{
    public:
// properties or attributes
string name;
string subject;
string dpt;
double salary;
// methods or functions
void changeSalary(double newSalary){
    salary = newSalary;
}
};
int main(){
    teacher t1;
//    t1 is an object of the teacher class and u can create multiple object like t2 t3 etc
t1.name ="ankita";
t1.subject ="cse";
t1.salary=20000;
t1.dpt="cse";
cout<<t1.name<<endl;
double newSalary=780932;
t1.changeSalary(newSalary); 
cout<<t1.salary<<endl;


return 0;

}

