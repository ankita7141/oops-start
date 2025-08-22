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
void change(Cricketer* c){
// (*c).avg=54.9;
c->avg=54.9;
}
int main(){
    Cricketer c1("Rohit",18000,48.6);
    Cricketer c2("virat",20000,29.6);
    Cricketer* p1=&c1;
    cout<<c1.avg<<endl;
   
    // cout<<(*p1).avg<<endl;
    cout<<p1->avg<<endl;

  change(&c1);
    cout<<c1.avg<<endl;

}