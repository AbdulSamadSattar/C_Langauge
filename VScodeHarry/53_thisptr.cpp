#include <iostream>
using namespace std;
class A{
    int a;
    public:
         A & setData(int a){
            this->a = a;
            return *this;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of a is "<<this->a<<endl;
        }};
int main(){
    A a;
    a.setData(4).getData();
    return 0;

}
// Output:
// The value of a is 4
// The value of a is 4