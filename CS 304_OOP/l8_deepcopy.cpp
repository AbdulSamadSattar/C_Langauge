#include <iostream>
#include <cstring>
using namespace std;

class Student {
private:
    char *name;
public:
    // Constructor
    Student() {
        name = nullptr;
    }
    // Copy constructor
    Student(const Student &obj) {
        if (obj.name != nullptr) {
            int len = strlen(obj.name);
            name = new char[len + 1];
            strcpy(name, obj.name);
        } else {
            name = nullptr;
        }
    }
    ~Student() {
        delete[] name;
    }
    // Other member functions
    // Example function to display student's name
    void display() {
        if (name != nullptr) {
            cout << "Student name: " << name << endl;
        } else {
            cout << "Student name: Not available" << endl;
        }
    }
};

int main() {
    Student studentA;
    Student studentB = studentA;
    // Display student names
    studentA.display();
    studentB.display();
    studentA.name("ASAD");

    return 0;
}