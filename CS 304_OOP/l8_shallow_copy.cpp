#include <iostream>
#include <conio.h>
using namespace std;
class student{
    int roll;
    string name;
    
    public:
        string na;
        student(){
            roll = 10;
            name = "AS";
            cout<<"Roll no: "<<roll<<endl<<"Name: "<<name <<"\n\n"; //Such Cout will WORK
        }
    void fun(student &obj){
        roll = obj.roll;
        na = obj.name;
    }
};
int main(){
    student s1,s2;
    // student s2;
    s1.fun(s2);
    return 0;
}
