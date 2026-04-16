#include <iostream>
using namespace std;

class Parent {
public:
    virtual void show() {
        cout << "This is Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "This is Child class" << endl;
    }
};

int main() {
    Parent* ptr;
    Child obj;

    ptr = &obj;
    ptr->show();   // Calls Child's function

    return 0;
}