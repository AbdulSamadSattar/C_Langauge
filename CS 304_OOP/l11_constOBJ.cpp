#include <iostream>
using namespace std;

class student {
private:
    int roll = 10;
public:
    student(){
        
    }
    void display() const{             //only const before void will not run and const both before and void will also run
        cout << "Roll No: " << roll << endl ;
    }
};

int main() {
    const student s;
    s.display();
}
