#include <iostream>
#include <cstring> // Include for strlen and strcpy

using namespace std;

class Student {
private:
    char* name;
    int rollNo;

public:
    void setName(const char* aName);
    void setRollNo(int aRollNo);
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

int main() {
    Student aStudent;

    // Error: rollNo is private, use the setter function
    // aStudent.rollNo = 5;

    // Error: name is private, use the setter function
    // aStudent.name = "Ali";

    aStudent.setRollNo(1);
    aStudent.setName("Ali");

    return 0;
}
