#include<iostream>
using namespace std;
class Student{
    public:
string name;
int num;
float cgpa;
Student (){//default constructor

}

Student(int n,string m,float g){//parameterised constructor 
    num=n;
    name=m;
    cgpa=g;

}
Student(int n,float g,string m){//parameterised constructor 
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

    Student s2;
    s2.cgpa=9;
    s2.name="ankita";
    s2.num=15;
    cout<<s2.name<<" "<<s2.cgpa<<" "<<s2.num<<endl;
    Student s3(16,"Ankita",9.9);
    print(s3);
    Student s4(17,5.8,"Ankita");
    print(s4);
    Student s5=s1;
    print(s5);//deep copy
    s5.name="Anuja";
print(s5);//deep copy because it will not change the name of s1 

}
