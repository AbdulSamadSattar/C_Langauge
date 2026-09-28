// Dynamic Binding (runtime polymorphism) with virtual, override and final keywords
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {          // virtual = enables dynamic binding
        cout << "Drawing a shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a square" << endl;
    }
};

int main() {
    Shape* ptr;
    Circle c;
    Square s;
    int choice;

    cout << "Enter 1 for Circle, 2 for Square: ";
    cin >> choice;

    if (choice == 1)
        ptr = &c;
    else
        ptr = &s;

    ptr->draw();   // decided at RUNTIME, depends on user's choice

    return 0;
}
// Output:
// Enter 1 for Circle, 2 for Square: 1
// Drawing a circle

// C_Langauge\VScodeHarry>
// Enter 1 for Circle, 2 for Square: anything
// Drawing a square