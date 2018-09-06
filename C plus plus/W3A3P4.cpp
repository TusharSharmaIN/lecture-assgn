#include <iostream>
#include <cmath>

using namespace std;

class Complex { 

    private: 
        double re_, im_;
    public:
        Complex(double re = 4, double im = 5): re_(re), im_(im) {           //Complete Arguments
 
            cout << "Ctor: (" << re_ << ", " << im_ << ")" << endl; 
        }
        ~Complex() { 
            static int i =1;
            cout << "Dtor: (" << re_ << ", " << im_ << ")" << endl;

            if (i==3) cout<<"----------"<<endl; // Don't Disturb this line
            i++;
            
        }
        void print() { 
            cout << "|" << re_ << "+j" << im_ << "| " << endl; 
        }
};

Complex c(8,4);                                                             // Object definition

int main() {
    cout << "main" << endl;
    double x, y;
    
    cin >> x;
    cin >> y;
    
    Complex d(x); 
    Complex e; 
    
    
    c.print(); 
    d.print(); 
    
    
    return 0;
}
