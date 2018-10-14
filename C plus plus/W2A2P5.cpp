/*
 *	Problem Statement
 *	
 *	Fill in the blanks. Use new & delete to allocate and free the memory for the integer array a of size 3. 
 *
 */

#include <iostream>
using namespace std;
void IO_Array(int *);
int main() {
     int *a = new int[3]; // Dynamically allocate the memory to array 'a'
    
    IO_Array(a);
    
    delete a; // Free the memory allocated to 'a'
    
    return 0;
}
 void IO_Array(int *a) {
     for (int i = 0; i < 3; ++i)
         cin >> a[i];
        
    for (int i = 0; i < 3; ++i)
         cout << i << " " << a[i] << " ";
}
