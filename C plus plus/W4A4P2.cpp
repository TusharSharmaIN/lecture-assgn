/*
 *	Problem Statement
 *	
 *	The following program is about static data members. 
 *	Fill in the blanks as per the given instruction.
 *
 */

#include<iostream>
using namespace std;

class MyClass {

    static int x;

    public:
        void get() { x++; }
        
static void print(int y) { // Fill the blanks with proper keywords

            x = x - y;

            cout << x << " ";
        }
};

int MyClass::x=1;  // Define static data member

int main() {
    int x;
    
    cin >> x;
    
    MyClass::print(x);
    MyClass s1;
    
    s1.get();
    s1.print(x);
    
    return 0;
}
