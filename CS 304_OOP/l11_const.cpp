#include <iostream>
using namespace std;

class student {
private:
    const int roll = 10;
    // roll = 1; //error because of const
public:
    student(){
        
    }
    void display(){
        // roll = 1; //error because of const
        cout << "Roll No: " << roll << endl ;
    }
};

int main() {
    student s;
    s.display();
}
