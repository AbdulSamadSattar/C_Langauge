#include <iostream>
#include <string>
using namespace std;

class student {
private:
    int roll;
    string name;
public:
    // Constructor to initialize roll and name
    student(int arg1, string arg2) {
        roll = arg1;
        name = arg2;
    }

    // Method to get roll number
    int getRoll() {
        return roll;
    }

    // Method to get name
    string getName() {
        return name;
    }
};

int main() {
    // Create a student object with roll number 1 and name "AS"
    student s(1, "AS");

    // Print roll number and name using cout in main
    cout << "Roll no: " << s.getRoll() << endl;
    cout << "Name: " << s.getName() << endl;

    return 0;
}
