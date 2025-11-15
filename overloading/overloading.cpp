#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v = 0) {
        value = v;
    }

    void show() const {
        cout << "Value: " << value << endl;
    }

    //Urinary Operator Overloading
    Number operator++() {
        ++value;
        return *this;
    }

    Number operator++(int) {
        Number temp = *this;
        value++;
        return temp;
    }

    Number operator-() {
        return Number(-value);
    }

    //Binary Operator Overloading
    Number operator+(const Number& obj) const {
        return Number(value + obj.value);
    }

    Number operator+(int n) const {
        return Number(value + n);
    }

    friend Number operator+(int n, const Number& obj);

    friend ostream& operator<<(ostream& out, const Number& obj);
    friend istream& operator>>(istream& in, Number& obj);
};


Number operator+(int n, const Number& obj) {
    return Number(n + obj.value);
}

ostream& operator<<(ostream& out, const Number& obj) {
    out << obj.value;
    return out;
}

istream& operator>>(istream& in, Number& obj) {
    cout << "Enter value: ";
    in >> obj.value;
    return in;
}

int main() {
    Number n1, n2(5), n3;

    cin >> n1;

    cout << "\n--- Unary Operators ---" << endl;
    ++n1; 
    n2++;  
    n3 = -n2;  

    cout << "After ++n1: " << n1 << endl;
    cout << "After n2++: " << n2 << endl;
    cout << "After -n2 : " << n3 << endl;

    cout << "\n--- Binary Operators ---" << endl;
    Number sum1 = n1 + n2;   
    Number sum2 = n1 + 1;    
    Number sum3 = 1 + n1;    

    cout << "n1 + n2 = " << sum1 << endl;
    cout << "n1 + 1  = " << sum2 << endl;
    cout << "1 + n1  = " << sum3 << endl;

    cout << "\n--- Display using << Operator ---" << endl;
    cout << "n1 = " << n1 << ", n2 = " << n2 << ", n3 = " << n3 << endl;

    return 0;
}
