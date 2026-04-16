#include <iostream>
using namespace std;
class student{
    string name;
    public:
        student(string n){
            name = n;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
        }
};
int main(){
    student s[4] = {student("Fahad Ali"),student("Abdul Samad"),student("Muhammad Asad"),student("Ahmed Sattar")}; // s[0], s[1]
    s[0].display();
    s[1].display();
    s[2].display();
    s[3].display();
}