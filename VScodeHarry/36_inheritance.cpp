#include <iostream>
using namespace std;

class Base {
public:
    int x;
    Base(int val) {
        x = val;
        cout << "Base constructed with " << x << endl;
    }
    Base() {  } // without default constructor, there is an error, To avoid this, explicitly call Base's constructor in the initializer list
};

class Derived : public Base {
public:
    Derived(int val) : Base(val) {   // explicitly calls Base's constructor
        cout << "Derived constructed with " << val << endl;
    }
};

int main() {
    Derived d(10);
    return 0;
}
//  Output: when  /* : Base(val)*/ is commented out
// Derived constructed with 10
// Output: when /* : Base(val)*/ is not commented out
// Base constructed with 10
// Derived constructed with 10

