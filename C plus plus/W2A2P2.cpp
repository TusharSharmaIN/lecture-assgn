/*
 *	Problem Statement
 *	
 *	Complete the Macro definition to get the desired output according to the test cases.
 *
 */

#include <iostream>
using namespace std;
#define SQUARE(x) (x)*(x)-(x-1) // Complete the Macro definition
 int main() {
     int i, j;
    
    cin >> i;
    
    j = SQUARE(i + 1); 
    
    cout << j << endl;
    
    return 0;
}
