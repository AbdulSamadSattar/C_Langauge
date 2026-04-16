#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
public:
    Student(int r) : rollNo(r) {}

    // Ordinary member function
    void display() {
        cout << "Roll No: " << rollNo << endl;
    }

    // Constant member function
    void display() const {
        cout << "Roll No: " << rollNo << endl;
    }

    // Modify data member using ordinary member function
    void setRollNo(int r) {
        rollNo = r;
    }

    // Attempt to modify data member using constant member function (will cause compilation error)
    void setRollNoConst(int r) const {
        // rollNo = r; // Uncommenting this line will cause a compilation error
    }

    // Access data member using constant member function
    int getRollNo() const {
        return rollNo;
    }

    // Demonstrate the use of this pointer in constant member function
    void printAddress() const {
        cout << "Address of this pointer: " << this << endl;
    }
};

int main() {
    const Student s1(101); // Create a constant object
    s1.display(); // Calls the constant member function
    // s1.setRollNo(102); // Compilation error: Attempting to modify a constant object

    Student s2(102); // Create a non-constant object
    s2.display(); // Calls the ordinary member function
    s2.setRollNo(103); // Calls the ordinary member function to modify the data member
    cout << "Modified Roll No: " << s2.getRollNo() << endl; // Calls the constant member function to access the data member

    // Demonstrate the use of this pointer in constant member function
    cout << "Address of s1: " << &s1 << endl;
    s1.printAddress(); // Calls the constant member function to print the address of the this pointer
    cout << "Address of s2: " << &s2 << endl;
    s2.printAddress(); // Calls the constant member function to print the address of the this pointer

    return 0;
}
