/*
 *	Problem Statement
 *	
 *	Fill the blank with the proper constructor and copy constructor to get the output as per the test cases.
 *
 */

#include <iostream>
using namespace std;

class Complex 
{
    public: 
    double *re, *im;

    Complex(double r, double m) {           //File in the Blanks - Write Arguements for default Constructor

        re = new double(r); 
        im = new double(m);

    }
    Complex(Complex& t) {                   //File in the Blanks - Write Arguements for copy Constructor

        re = new double; im = new double; 
        *re = *t.re;  *im= *t.im; 

    }
    ~Complex() { 
        delete re, im; 
    }
}; // End of class


int main() {
    double x, y, z;
    cin >> x >> y  >> z;
    Complex n1(x,y);
    cout << *n1.re << "+" << *n1.im << "i ";
    Complex n2 = n1;
    cout << *n2.re << "+" << *n2.im << "i ";
    *n1.im = z;
    cout << *n2.re << "+" << *n2.im << "i ";
    cout << *n1.re << "+" << *n1.im << "i ";
    return 0;
}
