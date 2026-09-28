#include <iostream>
using namespace std;

class Base {
private:
    int a = 1;
protected:
    int b = 2;
public:
    int c = 3;
    int getA() { return a; }   // the way to reach private a
};

class Derived : public Base {
public:
    void show() {
        // cout << a;          // ERROR: private in Base
        cout << b << endl;     // OK: protected
        cout << c << endl;     // OK: public
        cout << getA() << endl; // OK: via public getter
    }
};

int main() {
    Derived d;
    d.show();
    cout << d.c << endl;    // OK: still public
    // cout << d.b;         // ERROR: protected outside the class
    return 0;
}
// Output:
// 2
// 3
// 3
// 1