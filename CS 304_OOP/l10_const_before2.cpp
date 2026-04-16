#include <iostream>
#include <conio.h>
using namespace std;

class ClassName {
private:
    int rollNo;
public:
    ClassName() {
        rollNo = 0;
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
        rollNo = rollno;
    }
     else {
        cout << "Function already called\n";
    }
}

int main() {
    ClassName c;
    c.Function(5);  // Output: 5
    c.Function(2);  // Output: Function already called
    cout << c.isRollNo(5);
    return 0;
}
