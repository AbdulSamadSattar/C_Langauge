// ~ Tilde
#include <iostream>
#include <conio.h>
using namespace std;
class l5_destructors
{
private:
    /* data */
public:
    l5_destructors(/* args */){
        cout<<"Inside class Constructor Calling"<<endl;
    }
    ~l5_destructors(){
        cout<<"Inside class Destructor Calling"<<endl;
    }
};

int main(){
    l5_destructors d;
    getch();
    return 0;
}

