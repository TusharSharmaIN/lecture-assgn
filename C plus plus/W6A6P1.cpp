#include <iostream>
using namespace std;

class A { int n;
    protected:
        A(int i) : n(i) { }
        virtual int get() = 0;
        virtual void print() = 0;
};

int A::get() {
    return n;
}

class B : private A {

    protected:

      B(int n) : A(n) {}  // Define the constructor to initialize A::n


      int get() { return A::get();  }  // Override get() function to return A::n

};

class C : public B {
    public:
        C(int i) : B(i) {}
        void print() {
            cout << get() << endl;
        }
};

int main(){
    int n;
    
    cin >> n;
    
    C *p = new C(n);
    p->print();
    
    return 0;
}
