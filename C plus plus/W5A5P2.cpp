#include <iostream>
#include <string>
using namespace std;

class Flower {
public:
    string name;

    Flower(string n) : name(n) { }

    void getFlowerName() { cout << name << " " << "is" << " "; }

};

class Rose: private Flower { // Inherit Flower as private
public:
    string color;

    /* Initialize name and color data members */
    Rose(string n = "No flower", string c = "Red") : Flower(n), color(c) {}
    
    void getFlowerName(Rose& r) { cout << r.color << endl; }
    
    using Flower::getFlowerName;   // Allow call to  getFlowerName() method in the base class
};

int main() {
    string flr, clor;

    cin >> flr >> clor;

    Rose s(flr);
    Rose r(flr, clor);

    s.getFlowerName();
    s.getFlowerName(r);

    return 0;
}
