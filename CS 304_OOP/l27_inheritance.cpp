#include<iostream>
#include<conio.h>
using namespace std;

class Base{
    private:
        int a;
    protected:
        int b;
    public:
        void getdata(){
            a = 10;
            b = 20;
            cout << "\n a: "<<a<<"\tb: "<<b;
        }

};

class Drived: private Base {
    public:
        void getdata()
        {
            Base::getdata();
        }
};
main(){
    Drived d;
    d.getdata();
    return 0;
}