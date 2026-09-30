#include <iostream>
using namespace std;
class B; // Forward declaration
class A{
    int x;
public:
    void setData(int a){
        x = a;
    }
    friend void swap(A &, B &);
    void printData(){
        cout<<"The value of x is "<<x<<endl;
    }
};

class B{
    int y;
public:
    void setData(int b){
        y = b;
    }
    void printData(){
        cout<<"The value of y is "<<y<<endl;
    }
    friend void swap(A &, B &);
};

void swap(A &o1, B &o2){
    int temp = o1.x;
    o1.x = o2.y;
    o2.y = temp;
}

int main(){
    A a1;
    B b1;
    a1.setData(5);
    b1.setData(10);
    a1.printData();
    b1.printData();
    swap(a1, b1);
    a1.printData();
    b1.printData();
    return 0;
}
// Output:
// The value of x is 5
// The value of y is 10
// The value of x is 10
// The value of y is 5