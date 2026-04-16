#include <iostream>
#include <conio.h>
using namespace std;
class student{
    public:
        /*inline*/void setRoll(int roll){   //automatically inlined by compiler.
        cout<<"Value is: "<<roll;
        }
};
int main(){
    student s;
    s.setRoll(4);
    return 0;
}