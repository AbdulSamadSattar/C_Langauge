#include <iostream>
#include <conio.h>
using namespace std;
class student{
    int rollno;
    string name;
    public:
        student setRollNo(int r){
            rollno = r;
            return *this;
        }
        int getRollNo(){ 
        return rollno; 
        } 
};
int main(){
    student s1,s2;
    s2 = s1.setRollNo(10);
    cout<<s2.getRollNo();
    return 0;
}