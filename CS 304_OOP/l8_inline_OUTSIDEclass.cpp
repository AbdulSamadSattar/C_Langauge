#include <iostream>
#include <conio.h>
using namespace std;
class student{
    int rollno;
    public:
        inline void setRoll(int roll);
};
void student::setRoll(int roll){
    rollno = roll;
    cout<<"Value is: "<<roll;
}
int main(){
    student s;
    s.setRoll(4);
    return 0;
}