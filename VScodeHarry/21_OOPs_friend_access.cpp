// Case	Allowed?
// Friend of Base → Base's private	✅
// Friend of Base → Derived's private	❌
// Friend of Derived → Derived's private	✅
// Friend of Derived → Base's private	❌
// Friend of Derived → Base's protected	✅

#include <iostream>
using namespace std;

class Base
{
private:
    int secret = 10;

protected:
    int prot = 5;
    friend void baseFriend(Base &b); // friend of Base
};

class Derived : public Base
{
private:
    int mine = 20;
    friend void derivedFriend(Derived &d); // friend of Derived
};

void baseFriend(Base &b); // correct signature for friend of Base

void baseFriend(Base &b)
{
    cout << "Base secret: " << b.secret << endl; // OK
}

void derivedFriend(Derived &d)
{
    cout << "Derived mine: " << d.mine << endl;   // OK: its own class
    cout << "Base protected: " << d.prot << endl; // OK: protected is inherited
    // cout << d.secret;                           // ERROR: Base's private
}

int main()
{
    Derived d;
    baseFriend(d); // accesses only Base's part
    derivedFriend(d);
    return 0;
}
// Output:
// Base secret: 10
// Derived mine: 20
// Base protected: 5