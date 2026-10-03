#include <iostream>
using namespace std;

class Base {
public:
    // Base(int val) { cout << "Base: " << val << endl; }
    // no default constructor
};

class Derived : public Base {
    // no constructor written at all — compiler generates one implicitly
};

int main() {
    Derived d;   // ERROR: compiler's auto-generated Derived() can't construct Base
    return 0;
}