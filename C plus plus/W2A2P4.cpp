#include<iostream>
using namespace std;
//overload area
int Area(int x, int y=10)
{	
  return x*y;	
}
 double Area(double x, double y=10.0)
{
  return x*y;
}
int main() {
    int x, y, t;
    double z, u, f;  
      
    cin >> x >> y ;
    cin >> z >> u ; 
       
    t = Area(x); 
    cout << t << " "; 
    
    f = Area(z); 
    cout << f << " "; 
    
    f = Area(z, u); 
    cout << f << endl; 
    
    return 0;
}
