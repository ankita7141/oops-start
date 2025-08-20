#include<iostream>

using namespace std;
class Student{
    public:
int prn;
string name;
float cgpa;

};
int main(){
    Student s;
    s.prn=14;
    cout<<"enter name: ";
    cin>>s.name;
    s.cgpa=8;
    cout<<s.prn<<""<<s.name<<""<<s.cgpa<<endl;
   


}
