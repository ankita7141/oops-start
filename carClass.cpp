#include<iostream>
using namespace std;
class Car{
    public:
    int price;
    string type;
    string name;
    int seat;

};
void print(Car c){
    cout<<c.name<<" "<<c.price<<"   "<<c.seat<<"  "<<c.type<<endl;
    
}
int main(){
    Car c1;
    c1.name ="swift";
    c1.price=70222;
    c1.seat=4;
    c1.type="suv";

Car c2;
    c2.name ="swift";
    c2.price=70222;
    c2.seat=4;
    c2.type="suv";

Car c3;
    c3.name ="swift";
    c3.price=70222;
    c3.seat=4;
    c3.type="suv";
    print(c1);
    print(c2);
    print(c3);

}

