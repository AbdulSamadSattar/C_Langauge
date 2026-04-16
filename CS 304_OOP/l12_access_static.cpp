#include <iostream>
using namespace std;
class student{
    public:
        static int roll;
};
int student::roll = 10;
int main(){
    student s;
    s.roll++;
    cout<<s.roll<<endl;
    student::roll++;
    cout<<s.roll<<endl;
}