/*
 *	Problem Statement
 *	
 *	Consider the following code snippet and fill in the blank with appropriate casting.
 *
 */

#include <iostream>
using namespace std;

class student {
    private: 
        int roll;

    public:
        student(int r) :roll(r) {}
        
        void fun() const {

            (const_cast<student*>(this))->roll = 5;                     //Blank

        }
int getRoll()  { return roll; }

}; // End of class student

int main() {

    int old_roll_no = 0;
    
    cin >> old_roll_no;
    student s(old_roll_no);
    
    cout << s.getRoll() << " ";
    s.fun();
    
    cout << s.getRoll();
    
    return 0;
}
