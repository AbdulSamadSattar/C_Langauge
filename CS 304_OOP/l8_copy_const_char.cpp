#include <iostream>
#include <conio.h>
using namespace std;
class student{
    int roll;
    string name;
    char gender;
    
    public:
        student(){
            roll = 10;
            name = "AS";
            gender = 'Male m';
            cout<<"Roll no: "<<roll<<endl<<"Name: "<<name << endl << "Gender: " << gender; //Such Cout will WORK
        }
};
int main(){
    student s1;
    student s2 = s1;
    return 0;
}
