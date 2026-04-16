#include <iostream>
#include <cstring>

using namespace std;

class Student {
private:
    char* name;
    int rollNo;

public:
    void setName(const char* aName);
    void setRollNo(int aRollNo);
    void displayInfo();
    ~Student(); // Destructor to release dynamically allocated memory
};

void Student::setName(const char* aName) {
    if (strlen(aName) > 0) {
        name = new char[strlen(aName) + 1]; // +1 for null terminator
        strcpy(name, aName);
    }
}

void Student::setRollNo(int aRollNo) {
    if (aRollNo > 0)
        rollNo = aRollNo;
}

void Student::displayInfo() {
    cout << "Name: " << name << ", Roll No: " << rollNo << endl;
}

Student::~Student() {
    delete[] name;
}

int main() {
    Student aStudent;

    aStudent.setRollNo(1);
    aStudent.setName("Ali");

    // Display the information
    aStudent.displayInfo();

    return 0;
}
