#include<iostream>
#include<conio.h>
using namespace std;

class Person { // Abstract class
protected: // Use protected to allow access in derived classes
    int id;
    string name;

public:
    Person(int i, string n) : id(i), name(n) {}

    virtual int getid() const {
        return id;
    }

    virtual string getname() const {
        return name;
    }

    virtual void display() = 0;
};

class Student : public Person {
private:
    float marks;

public:
    Student(int i, string n, float m) : Person(i, n), marks(m) {}

    void display() override {
        cout << "***Student Record***";
        cout << "\n\n Student Id: " << getid();
        cout << "\n\n Student Name: " << getname();
        cout << "\n\n Student Marks: " << marks;
    }
};

class Teacher : public Person {
private:
    string qualif;

public:
    Teacher(int i, string n, string q) : Person(i, n), qualif(q) {}

    void display() override {
        cout << "***Teacher Record***";
        cout << "\n\n Teacher Id: " << getid();
        cout << "\n\n Teacher Name: " << getname();
        cout << "\n\n Teacher Qualification: " << qualif;
    }
};

int main() {
    Person *p[2];
    p[0] = new Student(100, "A.Samad", 3.69);
    p[1] = new Teacher(1000, "Youtube", "BS IT");

    for (int i = 0; i < 2; ++i) {
        p[i]->display();
        cout << "\n\n";
    }

    // Freeing the allocated memory
    for (int i = 0; i < 2; ++i) {
        delete p[i];
    }

    return 0;
}
