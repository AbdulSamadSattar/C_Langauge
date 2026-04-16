#include <iostream>
using namespace std;

class Complex {
public:
    double real;
    double img;

    Complex(double r, double i) : real(r), img(i) {}

    friend ostream & operator << (ostream & os, const Complex & c); 
};

// Stream Insertion Operator Implementation
ostream & operator << (ostream & os, const Complex & c){ 
    os << '(' << c.real << ',' << c.img << ')';
    return os; 
} 

int main() {
    Complex myComplex(3.5, 2.0);

    // Output using the stream insertion operator
    cout << "Complex Number: " << myComplex << endl;

    return 0;
}
