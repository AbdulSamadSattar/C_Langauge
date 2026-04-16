#include <iostream>
#include <conio.h>
using namespace std;
class student{
    int roll;
    string name;
    public:
        student(){
            roll = 0;
            name = "";
            cout<<"Roll no: "<<roll<<endl<<"Name: "<<name; 
        }
        student(int arg1,string arg2){
            roll = arg1;
            name = arg2;
            cout<<"Roll no: "<<roll<<endl<<"Name: "<<name; //Such Cout will WORK
        }
};
int main(){
    student s;
    student s1(1,"AS");
    return 0;
}
