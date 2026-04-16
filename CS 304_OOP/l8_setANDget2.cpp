#include <iostream>
#include <string> // Include string header for using string datatype
using namespace std;

class student {
private:
    int rollno;
    string name;

public:
    void setRollNo(int r) {
        if (r <= 0) {
            rollno = 0;
        } else {
            rollno = r;
        }
    }

    int getRollNo() {
        return rollno;
    }
};

int main() {
    student s;
    s.setRollNo(-5);
    cout << s.getRollNo();
    return 0;
}
