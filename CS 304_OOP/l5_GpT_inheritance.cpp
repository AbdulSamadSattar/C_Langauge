#include <iostream>
#include <cstdlib>
using namespace std;

class person {
public:
    void walk() {
        cout << "Walk" << endl;
    }
    void eat() {
        cout << "Eating like Human" << endl;
    }
};

class fish {
public:
    void swim() {
        cout << "Swim" << endl;
    }
    void eat() {
        cout << "Eating like fish" << endl;
    }
};

class mermaid: public fish, public person {

};

int main() {
    mermaid m;
    m.walk();
    m.swim();
    // Ambiguity error: m.eat(); // Uncommenting this line will cause ambiguity error due to the same function name in both base classes.
    // You may need to resolve the ambiguity by explicitly specifying which eat function to call.

    // Wait for a key press before exiting
    cin.get();
    return 0;
}
