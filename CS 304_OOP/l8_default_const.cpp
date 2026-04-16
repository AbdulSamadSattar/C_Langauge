#include <iostream>
#include <conio.h>
using namespace std;
class student{
    int roll;
    string name;
    char ch;
    public:
        student(){
            roll = 0;
            ch = NULL; //or /*' '*/
            name = "";
            cout<<"Roll no: "<<roll<<endl<<"Name: "<<name << endl << "Gender: " << ch; //Such Cout will WORK
        }
};
int main(){
    student s;
    // cout<<s; error
    return 0;
}
