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
