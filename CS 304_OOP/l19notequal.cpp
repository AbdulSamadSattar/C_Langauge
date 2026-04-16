#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double img;
public:
    // Constructor to initialize the complex number
    Complex(double r, double i) : real(r), img(i) {}
    // Inequality (!=) operator overloading as a member function
    bool operator !=(const Complex & c);
    // Getter functions to access private members
    double getReal() const { return real; }
    double getImg() const { return img; }
};
// Implementation of the member function for operator !=
bool Complex::operator !=(const Complex & c) {
    return (real != c.real) || (img != c.img);
}
int main() {
    // Creating two complex numbers
    Complex complex1(3.5, 2.0);
    Complex complex2(1.0, 4.5);  // Complex number with different values

    // Checking inequality using member function
    if (complex1 != complex2) {
        cout << "Complex numbers are not equal (member function)." << endl;
    } else {
        cout << "Complex numbers are equal (member function)." << endl;
    }
    return 0;// Output:Complex numbers are not equal (member function).
}

