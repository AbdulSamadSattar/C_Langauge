#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double img;
public:
    // Constructor to initialize the complex number
    Complex(double r, double i) : real(r), img(i) {}
    // Equality (==) operator overloading
    bool operator == (const Complex & c);
    // Inequality (!=) operator overloading
    bool operator != (const Complex & c);
};
// Equality (==) operator implementation
bool Complex::operator == (const Complex & c) {
    return (real == c.real) && (img == c.img);
}
// Inequality (!=) operator implementation
bool Complex::operator != (const Complex & c) {
    // Using the negation of the equality operator
    return !(*this == c);
}
int main() {
    // Creating two complex numbers
    Complex complex1(3.5, 2.0);
    Complex complex2(3.5, 2.0);  // Complex number with the same values

    // Checking equality
    if (complex1 == complex2) {
        cout << "Complex numbers are equal." << endl;
    } else {
        cout << "Complex numbers are not equal." << endl;
    }
    // Checking inequality
    if (complex1 != complex2) {
        cout << "Complex numbers are not equal." << endl;
    } else {
        cout << "Complex numbers are equal." << endl;
    }
    return 0;
}
