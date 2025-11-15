#include <iostream>
using namespace std;

class A {
    int i, k;
    int *l;   

public:
    
    A(int x, int y) {
        i = x;
        k = y;
        l = new int;   
        *l = y;       
    }

    
    A(const A &obj) {
        i = obj.i;
        k = obj.k;
        l = new int;   
        *l = *(obj.l);
    }

    
    ~A() {
        delete l;
    }

    
    void setK(int val) {
        k = val;
    }

    void setL(int val) {
        *l = val;
    }

    
    void display(string name) {
        cout << name << " -> i: " << i << ", k: " << k << ", l: " << *l << endl;
    }
};

int main() {
    A obj1(11, 12);     
    A obj2 = obj1;      

    obj2.setK(13);
    obj2.setL(14);

    obj1.display("obj1");
    obj2.display("obj2");

    return 0;
}