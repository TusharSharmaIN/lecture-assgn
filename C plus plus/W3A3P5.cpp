#include <iostream>
using namespace std;

class MyClass {

    int mem_;
      mutable int x_; 
    public:
        MyClass(int m, int mm) : mem_(m), x_(mm) {}

        int getxMem() const { return x_; }

        void setxMem(int i) const { x_ = i; } 

}; // End of class
int main() {
    int x, y, z;
    
    cin >> x; 	
    cin >> y;	
    cin >> z;
    
    const MyClass myConstObj(x, y);
    myConstObj.setxMem(z);
    
    cout << myConstObj.getxMem() << endl;
    
    return 0;
}
