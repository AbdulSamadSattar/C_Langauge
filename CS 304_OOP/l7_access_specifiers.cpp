#include <iostream>
#include <conio.h>
using namespace std;
class person{
    public:
        void display(){
            cout<<"RUN";
    }
};
int main(){
    person* pt;
    pt-> display();
    return 0;
    
}