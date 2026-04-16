#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double img;

public:
    // Constructor to initialize the complex number
    Complex(double r, double i) : real(r), img(i) {}

    // Equality (==) operator overloading as a member function
    bool operator ==(const Complex & c);

    // Getter functions to access private members
    double getReal() const { return real; }
    double getImg() const { return img; }
};

// Equality (==) operator overloading as a non-member friend function
bool operator ==(const Complex& lhs, const Complex& rhs);

// Implementation of the member function for operator ==
bool Complex::operator ==(const Complex & c) {
    return (real == c.real) && (img == c.img);
}

// Implementation of the non-member friend function for operator ==
bool operator ==(const Complex& lhs, const Complex& rhs) {
    return (lhs.getReal() == rhs.getReal()) && (lhs.getImg() == rhs.getImg());
}

int main() {
    // Creating two complex numbers
    Complex complex1(3.5, 2.0);
    Complex complex2(3.5, 2.0);  // Complex number with the same values

    // Checking equality using member function
    if (complex1 == complex2) {
        cout << "Complex numbers are equal (member function)." << endl;
    } else {
        cout << "Complex numbers are not equal (member function)." << endl;
    }

    // Checking equality using friend function
    if (operator==(complex1, complex2)) {
        cout << "Complex numbers are equal (friend function)." << endl;
    } else {
        cout << "Complex numbers are not equal (friend function)." << endl;
    }

    return 0;
}
