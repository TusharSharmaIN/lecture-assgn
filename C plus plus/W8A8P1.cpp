/*
 *	Problem Statement
 *	
 *	Consider the following code. 
 *	Write the a correct Swap function
 *
 */

#include <iostream>

#include <string>

using namespace std;
// --------- You shouldn't write more than one Swap function -------------
template < typename T >
T Swap( T& a, T& b)
{
  	T temp = a;
  	a = b;
  	b = temp;
}
int main() {
    int a, b;
    double s, t;
    string mr, ms;
    
    cin >> a >> b >> s >> t ;
    cin >> mr >> ms ;

    Swap(a, b);
    Swap(s, t);
    swap(mr, ms);

    cout << a << " " << b << " " ;
    cout << s << " " << t << " " ;
    cout << mr << " " << ms ;

    return 0;
}
