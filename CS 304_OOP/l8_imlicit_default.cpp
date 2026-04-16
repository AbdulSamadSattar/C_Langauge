#include <iostream>
#include <string>
using namespace std;

class student {
private:
    int roll;
    char ch;
    string name;

public:
    // Member function to display student details
    void display() {
        cout << "Roll no: " << roll << endl << "Name: " << name << endl << "Gender: " << ch;
    }
};

int main() {
    student s;
    s.display();
    return 0;
}
