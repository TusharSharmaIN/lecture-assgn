/*
 *	Problem Statement
 *	
 *	Fill in the blanks below to complete the program. 
 *	Here we are trying to overload the O/P stream operator
 *
 */

#include <iostream>
using namespace std;

class Date {
        int dd; 
        int mm;
        int yyyy;

    public:

        Date(int d, int m, int y): dd(d), mm(m), yyyy(y) { }
        
        friend ostream& operator<<(ostream& os, const Date& dt); // Fill the return type

}; // End of the class

ostream& operator<<(ostream& os, const Date& dt) {  // Fill the appropriate return type

    os<<dt.mm<<"/"<<dt.dd<<"/"<<dt.yyyy;    // Write the implementation code looking to the O/P format

    return os;
}

int main() {
    int day, month, year;
    cin >> day;
    cin >> month;
    cin >> year;
    
    Date dt(day, month, year);
    cout << dt;
    
    return 0;
}
