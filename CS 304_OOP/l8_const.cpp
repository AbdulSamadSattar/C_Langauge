#include <iostream>
#include <conio.h>
using namespace std;
class student{
    int roll;
    string name;
    public:
        student(){
            roll = 1;
            name = "samad";
            cout<<"Roll no: "<<roll<<endl<<"Name: "<<name; //Such Cout will WORK
        }
};
int main(){
    student s;
    // cout<<s; error
    return 0;
}
