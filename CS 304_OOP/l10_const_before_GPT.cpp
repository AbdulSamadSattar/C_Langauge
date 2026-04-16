#include <iostream>
#include <conio.h>
using namespace std;

class ClassName {
private:
    bool called;
public:
    ClassName() {
        called = false;
    }
    void Function(int rollno);
};

void ClassName::Function(int rollno) {
    if (!called) {
        cout << rollno;
        called = true;
    } else {
        cout << "\nFunction already called\n";
    }
}

int main() {
    ClassName c;
    c.Function(5);  // Output: 5
    c.Function(2);  // Output: Function already called
    return 0;
}
