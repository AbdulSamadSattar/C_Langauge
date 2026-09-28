#include <iostream>
using namespace std;

class Base {
private:
    int secret = 10;
    friend void showBase(Base& b);   // friend of Base only
};
// showBase is a friend function of Base, so it can access private members of Base



class Derived : public Base {
private:
    int mine = 20;
};

void showBase(Base& b) {
    cout << "Base secret: " << b.secret << endl;   // OK: friend of Base
}

int main() {
    Derived d;
    showBase(d);   // OK: Derived converts to Base&, and the function only touches Base's part
    return 0;
}
// Output:
// Base secret: 10