#include<iostream>
using namespace std;

class Cricketer{
public:
string name;
int runs;
float avg;

Cricketer(string name,int runs,float avg){
    this->name=name;
    this->runs=runs;
    this->avg=avg;
} 




};

int main(){
    Cricketer c1("Rohit",18000,48.6);
    Cricketer* c2=new Cricketer("virat",20000,29.6);
        cout<<c1.avg<<" "<<c1.name<<endl;
        cout<<c2->avg<<" "<<c2->name<<endl;
   

}