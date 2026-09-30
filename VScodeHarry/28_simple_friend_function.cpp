#include <iostream>
using namespace std;
class B; // Forward declaration
class A{
int num;
public:
    void setData(int a){
        num = a;
    }
    friend void add(A , B);
};
class B{
int val;
public:
    void setData(int b){
        val = b;
    }
    friend void add(A, B);
};

void add(A o1, B o2){
    cout<<"Summation of A and B is "<<o1.num + o2.val<<endl;
}
int main(){
    A a;
    B b;
    a.setData(5);
    b.setData(10);
    add(a, b);
    return 0;
}
// Output:
// Summation of A and B is 15