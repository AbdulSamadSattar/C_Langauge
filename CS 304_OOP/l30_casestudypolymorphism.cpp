#include<iostream>
#include<conio.h>
using namespace std;
class Person{ // Abstract cLass
    int id;
    string name;
    public:
        Person(int i,string n){
            id = i;
            name = n;
        }
        virtual int getid(){
            return id;
        }
        virtual string getname(){
            return name;
        }
        virtual void display() = 0;
};
class Student: public Person{
    float marks;
    public:
        Student (int i,string n, float m): Person(i,n){
            marks = m;
        }
        void display(){
            cout<<"***Student Record***";
            cout<<"\n\n Student Id: "getid();
            cout<<"\n\n Student Name: "getname();
            cout<<"\n\n Student Marks: "marks;
        }
};
class Teacher: public Person{
    string qualif;
    public:
        Teacher (int i,string n, string q): Person(i,n){
            qualif = q;
        }
        void display(){
            cout<<"***Teacher Record***";
           cout<<"\n\n Teacher Id: "getid();
           cout<<"\n\n Teacher Name: "getname();
           cout<<"\n\n Teacher Qualification: "qualif;
        }
};
main(){
    Person *p[2];//p[0];p[1]
    p[0] = new Student(100,"A.Samad",3.69);
    p[1] = new Teacher(1000,"Youtube","BS IT");
    p[0] -> display();
    p[1] -> display();
    return 0;
}