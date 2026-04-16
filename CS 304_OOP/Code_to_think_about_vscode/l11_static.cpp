#include <iostream>
using namespace std;

class student {
private:
    static int roll; // Declare roll as a static member variable
public:
    student(){
        roll++; // Increment the static member variable
    }
    void display() {             
        cout << "Roll No: " << roll << endl ;
    }
};

// Define the static member variable outside the class
int student::roll = 10; // Initialize roll to 10

int main() {
    student s1;
    s1.display();   // output: 11
    student s2;
    s2.display();   // output: 12
    return 0;
}

