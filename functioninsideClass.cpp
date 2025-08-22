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
void print(int runs){
    cout<<this->name<<" "<<this->runs<<endl;
    cout<<runs<<endl;
}
int matches(){
    return runs/avg;
}

};
int main(){
    Cricketer c1("Rohit",18000,48.6);
    Cricketer c2("virat",20000,29.6);
    c1.print(3);
    c2.print(2);
    cout<<c1.matches()<<endl;
    cout<<c2.matches()<<endl;
    


}