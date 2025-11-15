#include <iostream>
using namespace std;


class India {
    float rupees;
public:
    India() { rupees = 0; }
    India(float r) { rupees = r; }

    float getRupees() const { return rupees; }

    void display() const {
        cout << "Amount in Indian Rupees: Rs" << rupees << endl;
    }
};


class USA {
    float dollars;
public:
    USA() { dollars = 0; }
    USA(float d) { dollars = d; }

    float getDollars() const { return dollars; }

    operator India() {
        float rupees = dollars * 83.0;   
        return India(rupees);
    }

    void display() const {
        cout << "Amount in US Dollars: $" << dollars << endl;
    }
};

class UAE {
    float dirhams;
public:
    UAE() { dirhams = 0; }
    UAE(float d) { dirhams = d; }

    operator India() {
        float rupees = dirhams * 22.5;  
        return India(rupees);
    }

    void display() const {
        cout << "Amount in UAE Dirhams: " << dirhams << endl;
    }
};

class UK {
    float pounds;
public:
    UK() { pounds = 0; }
    UK(float p) { pounds = p; }

    operator India() {
        float rupees = pounds * 104.0;  
        return India(rupees);
    }

    void display() const {
        cout << "Amount in British Pounds: " << pounds << endl;
    }
};

int main() {
    USA usd(10);   
    UAE aed(50);   
    UK gbp(5);   

    usd.display();
    aed.display();
    gbp.display();

    India inr_from_usd = usd;
    India inr_from_aed = aed;
    India inr_from_gbp = gbp;

    cout << "\nAfter Conversion to Indian Rupees:\n";
    inr_from_usd.display();
    inr_from_aed.display();
    inr_from_gbp.display();

    return 0;
}
