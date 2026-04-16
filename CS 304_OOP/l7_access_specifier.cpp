#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    void displayRollNo() {
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    // Using dot operator
    Student aStudent; // declaring Student object
    aStudent.rollNo = 5; // accessing rollNo using dot operator
    cout << "Using dot operator:" << endl;
    aStudent.displayRollNo(); // accessing member function using dot operator

    // Using arrow operator
    Student *ptStudent = new Student(); // declaring and initializing Student pointer
    ptStudent->rollNo = 10; // accessing rollNo using arrow operator
    cout << "Using arrow operator:" << endl;
    ptStudent->displayRollNo(); // accessing member function using arrow operator

    // Don't forget to release dynamically allocated memory
    delete ptStudent;

    return 0;
}
