#include <iostream>
using namespace std;

class S;

class R {
    int width, height;
    public:
        int area() {  // Area of rectangle

            return (width * height); }

        void convert(S a);  
};

class S {
    friend class R;                             //declrae function class
    private:
        int side;
    public:
        S(int a) : side(a) {}
};

void R::convert (S a) {                         //write class definition

    width = a.side;

    height = a.side;    // Interpreting Square as an rectangle
}

int main() {
    int x;
    cin >> x;
    R rect;
    S sqr(x);
    
    rect.convert(sqr);
    cout << rect.area();
    
    return 0;
}
