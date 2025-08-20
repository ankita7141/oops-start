#include<iostream>
using namespace std;
class Student{
    public:
string name;
int num;
float cgpa;

Student(int n,string m,float g){
    num=n;
    name=m;
    cgpa=g;

}
};
void print(Student s){
cout<<s.name<<" "<<s.cgpa<<" "<<s.num<<endl;
}
int main(){
    Student s1(14,"Ankita",8.2);
    print(s1);
}
