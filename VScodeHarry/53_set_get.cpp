#include<iostream>
using namespace std;
class A{
    int a;
    public:
        void setData(int a1){
            a = a1; 
            // a = a; //Functions run but garbage value
        }
        void getData(){
            cout<<"The value of a is "<<a<<endl;
        } 
};
int main(){
    A a;
    a.setData(4);
    a.getData();
    return 0;
}

