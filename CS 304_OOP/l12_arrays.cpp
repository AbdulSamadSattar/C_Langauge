#include <iostream>
using namespace std;
class student{
    string name;
    public:
        student(){
            name = "Abdul Samad";
        }
        void display(){
            cout<<"Name: "<<name<<endl;
        }
};
int main(){
    student s[2]; // s[0], s[1]
    s[0].display();
    s[1].display();
}