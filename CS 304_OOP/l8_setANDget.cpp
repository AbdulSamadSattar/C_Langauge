#include <iostream>
#include <conio.h>
using namespace std;
class student{
    int rollno;
    string name;
    public:
        void setRollNo(int r){
            rollno = r;
        }
        int getRollNo(){
            return rollno;
        }
        void setName(string n){
            name = n;

        }
        string getName(){
            return name;
        }
};
main(){
    student s;
    s.setRollNo(10);
    cout<<s.getRollNo();
    s.setName("AS");
    cout<<s.getName();
    return 0;
}
    
