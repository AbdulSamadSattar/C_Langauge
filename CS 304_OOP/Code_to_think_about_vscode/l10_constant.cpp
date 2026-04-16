#include <iostream>
#include <conio.h>
using namespace std;

class ClassName {
private:
    int rollNo;
public:
    ClassName() {
        rollNo = 5;
    }
    bool isRollNo(int aNo);
    void Function(int rollno);
};

bool ClassName::isRollNo(int aNo) {
    if (rollNo == aNo) {
        return true;
    }
    return false;
}

void ClassName::Function(int rollno) {
    if (!isRollNo(rollno)) {
        cout << rollno <<endl;
        rollNo = rollno; // Update the rollNo member variable
    } else {
        cout << "Function already called\n";
    }
}


int main() {
    ClassName c;
    c.Function(5);  // Output: Function already called
    c.Function(2);  // Output: 2
    cout << c.isRollNo(5);
    return 0;
}

