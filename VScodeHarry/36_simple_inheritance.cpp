#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base default constructor" << endl; }
    Base(int val) { cout << "Base constructed with " << val << endl; }
};

class Derived : public Base {
public:
    Derived() {   // fine — compiler uses Base() automatically
        cout << "Derived constructed" << endl;
    }
};

int main() {
    Derived d;
    return 0;
}
// Output:
// Base default constructor
// Derived constructed