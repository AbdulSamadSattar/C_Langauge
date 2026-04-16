#include <iostream>
using namespace std;

class student {
    int roll;
    string name;
public:
    student(): roll(5), name("Ahmed") { 
    }
    void display(){
        cout << "Roll No: " << roll << endl ;
        cout << "Name: " << name << endl ;
    }
};
int main() {
    student s;
    s.display();
    return 0;
}
