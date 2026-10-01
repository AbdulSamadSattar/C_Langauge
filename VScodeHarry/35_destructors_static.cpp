#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value 
// int count=0;

class num{
    static int count; // always initialize static variables outside the class. If not static then it will be initialized for every object and will not be shared among all the objects. So, it will always be 1 for every object.
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for object number"<<count<<endl;
        }

        ~num(){
            cout<<"This is the time when my destructor is called for object number"<<count<<endl;
            count--;
        }
};
int num::count;// = 0; // always initialize static variables outside the class
int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}

// Output:
// We are inside our main function
// Creating first object n1
// This is the time when constructor is called for object number1
// Entering this block
// Creating two more objects
// This is the time when constructor is called for object number2
// This is the time when constructor is called for object number3
// Exiting this block
// This is the time when my destructor is called for object number3
// This is the time when my destructor is called for object number2
// Back to main
// This is the time when my destructor is called for object number1