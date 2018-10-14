/*
 *	Problem Statement
 *	
 *	Consider the following code snippet. Fill the BLANKS.
 *	It is based on the virtuality and inheritance concept
 *
 */

#include <iostream>
using namespace std;

class A {
    protected:
        int i;
    public:
        A(int a = 0): i(a) {}
        virtual void fun() {                            //Blank
            cout << i; // Don't Edit this line
        }
}; // End of class A

class B: public A {
    public:
        B(int a = 0): A(a) {}
        void fun() {                                    //Blank
            cout << i * i; // Don't Edit this line
        } 
}; // End of class B

class C: public B {
public:
        C(int a = 0): B(a) {}
        void fun() { cout << i + i; }
};// End of class C

int main() {
    int num;
    cin >> num;
    B *bp = new C(num);
    bp->fun();
    return 0;
}
