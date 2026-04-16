#include <iostream>
using namespace std;

class student {
private:
    static int roll; // Declare roll as a static member variable
public:
    void display() {      
        roll++;       
        cout << "Roll No: " << roll << endl ;
    }
};

// Define the static member variable outside the class
int student::roll = 10; // Initialize roll to 10

int main() {
    student s1,s2;
    s1.display();   // output: 11
    s2.display();   // output: 12
}
