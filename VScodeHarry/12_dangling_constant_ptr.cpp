#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    // (a) Pointer to constant — data can't change through ptr, pointer can
    const int* ptr1 = &a;
    // *ptr1 = 15;   // ERROR: can't modify value
    ptr1 = &b;       // OK: can point elsewhere

    // (b) Constant pointer — pointer can't change, data can
    int* const ptr2 = &a;
    *ptr2 = 15;      // OK: can modify value
    // ptr2 = &b;    // ERROR: can't repoint

    // (c) Constant pointer to constant — neither can change //Fully Constant Refrences
    const int* const ptr3 = &a;
    // *ptr3 = 15;   // ERROR
    // ptr3 = &b;    // ERROR

    cout << a << " " << b << endl;

    int* ptr = new int(5);
    cout << endl<<"Address ptr: "<<ptr;
    cout << endl<< "Value *ptr: "<<*ptr;
    delete ptr;        // memory freed
    ptr = nullptr;      // best practice: avoid dangling pointer by resetting

    // If you had NOT set ptr to nullptr, *ptr would be a dangling pointer
    // and dereferencing it would be undefined behavior.
    return 0;
}