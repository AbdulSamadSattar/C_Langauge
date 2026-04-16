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
    student s1("Fahad Ali"),s2("Abdul Samad");
    student s[4] = {s1,s2,student("Muhammad Asad"),student("Ahmed Sattar")}; 
    s[0].display();
    s[1].display();
    s[2].display();
    s[3].display();
}