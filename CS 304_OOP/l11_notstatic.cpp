#include <iostream>
using namespace std;

class student {
private:
    int roll;
public:
    student(){
        roll = 10;
        roll++;
    }
    void display() {             
        cout << "Roll No: " << roll << endl ;
    }
};

int main() {
    student s1;
    s1.display();
    student s2;
    s2.display();   
    return 0;
}