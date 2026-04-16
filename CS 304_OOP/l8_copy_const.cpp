#include <iostream>
#include <conio.h>
using namespace std;
class student{
    int roll;
    string name;
    
    public:
        student(){
            roll = 10;
            name = "AS";
            cout<<"Roll no: "<<roll<<endl<<"Name: "<<name <<endl; //Such Cout will WORK
        }
        void display(string x){
            cout<<x;
        }
};
int main(){
    student s1;
    student s2 = s1;
    s2.display("Abdul Samad");
    return 0;
}
