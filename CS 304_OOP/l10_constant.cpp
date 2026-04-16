#include <iostream>
#include <conio.h>
using namespace std;

class ClassName{ 
    int rollno;
    public:
        void Function() const;
};
void ClassName:: Function() const
    {
    cout << 2+5;
 }; 
main(){
    ClassName c;
    c.Function();
    return 0;
 }
