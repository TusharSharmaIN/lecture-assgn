#include <iostream>

#include <exception>

using namespace std;


class myexception : public exception {
// Define the Proper function which will return a string "DivideByZero"

const char* what() const throw()                //Blank 1
  {
    return "DivideByZero";
  }



} myex;

class DivideByZero {
public:
    int numerator, denominator;
    DivideByZero(int a = 0, int b = 0) : numerator(a), denominator(b) {}
    int divide(int numerator, int denominator) {
        if (denominator == 0) {
            throw myex;
        }
        return numerator / denominator;
    }
};

int main() {
    DivideByZero d;
    int a, b;

    cin >> a >> b;

    try {
        d.divide(a, b);
    }
    catch (exception& e) {
        cout << e.what() << '\n';
    }

    return 0;
}
