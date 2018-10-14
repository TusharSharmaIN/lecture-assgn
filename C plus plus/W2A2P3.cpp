/*
 *	Problem Statement
 *	
 *	Fill in the formal parameters in the swap() header to get the desired output according to the test cases.
 *
 */

#include <iostream>
using namespace std;
int swap(int &y , int &z) {		//complete formal arguements
    int t;
    
    t = y;
    y = z;
    z = t;
    
    return 0;
}
int main() {
     int a, b;
    
    cin >> a >> b;
    
    swap(a, b);
    
    cout << a << " " << b << endl;
    
    return 0;
}
