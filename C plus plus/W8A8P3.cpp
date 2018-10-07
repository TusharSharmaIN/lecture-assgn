#include<iostream>

using namespace std;
template < typename T = char, typename U = int>
class A {
    public:
        T x; // T and U are two template
        U y;
        A() { cout << "called" << endl; }
        A(T x, U y) { cout << x << ' ' << y << endl; };

}; // End of class

int main()  {
    int num1 = 0;
    double num2 = 0;
    char c;

    cin >> num1;
    cin >> num2;
    cin >> c;

    A<char> a;
    A<char, int>(c, num1);
    A<int, double>(num1, num2);

    return 0;
}
