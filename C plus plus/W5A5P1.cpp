#include <iostream>
using namespace std;

class Area {
    public:
        int calc(int l, int b) { return l*b; }
};

class Perimeter {
    public:
        int calc(int l, int b) { return 2 * (l + b); }
};

/* Rectangle class is derived from classes Area and Perimeter. */
class Rectangle: private Area, private Perimeter {  // Inherit the required base classes
    private:
        int length, breadth;
    public:
        Rectangle(int l, int b) : length(l), breadth(b) {}

    int area_calc() {
        /* Calls calc() of class Area and returns it. */

        return Area::calc(length, breadth);                 //File blank
    }
    int peri_calc() {
        /* Calls calc() function of class Perimeter and returns it. */

        return Perimeter::calc(length, breadth);            //Fill blank
    }
};

int main() {
    int l, b;
    cin >> l >> b;

    Rectangle r(l, b);

    cout << r.area_calc() << endl;
    cout << r.peri_calc() ;

    return 0;
}
