/*
 *	Problem Statement
 *	
 *	Fill in the blanks below to complete the program to match the outputs of the test cases. 
 *	Here we are trying to create a new box which dimension (length, breadth & height) is the sum of the dimensions of two boxes. 
 *	In the O/P we should get the addition result of the length, breadth & height of the new box.
 *
 */

#include <iostream>
using namespace std;

class Box {
    private:
        double length, breadth, height;

    public:
        Box(double a = 0, double b = 0, double c = 0) :
            length(a), breadth(b), height(c) {};

        double getDimension() {

            return length + breadth + height;
        }
        Box operator+(const Box& x) { // Fill the name of the function
            Box box;
            box.length = length + x.length;    // Fill the blank
            
            box.breadth = breadth + x.breadth;  // Fill the blank

            box.height = height + x.height;    // Fill the blank

            return box;
        }
}; // End of the class

int main() {

    double l = 0, b = 0, h = 0;
    cin >> l; cin >> b; cin >> h;
    
    Box Box1(4.00, 5.00, 6.00), Box2(l, b, h), Box3;
    Box3 = Box1 + Box2;
    
    double dim = Box3.getDimension();
    cout << dim;
    
    return 0;
}
