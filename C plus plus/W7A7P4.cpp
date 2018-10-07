#include <iostream>
using namespace std;
	
class A {
    int i;
    public:
        A(int ai) : i(ai) {}
        int get() const { return i; }
        void update() { ++i; }
};
	
class B { 
    int i;
    public:
        B(int ai) : i(ai) {}
        int get() const { return i; }
        
		    B(const A& tempA)	:	i(tempA.get())	{	}             //Blank
     	
        operator A()
        {	return A(i);	}
        void update() { ++i; }
}; // End of class B

int main() {
    int i;
    cin >> i;
    
    A a(i++);
    B b(i);
    
    const B &r = static_cast<B>(a);                         //Blank
    a.update();
    cout << a.get() << ":";
    cout << r.get() << ":";
	
    const A &s = static_cast<A>(b);                         //Blank
    b.update();
    cout << b.get() << ":";
    cout << s.get() << ":";
	
    return 0;
}
