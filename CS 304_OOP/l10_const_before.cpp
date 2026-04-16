#include <iostream>
#include <conio.h>
using namespace std;

class ClassName{ 
    public:
        int rollno;
        const void Function(int rollno) ;
};
const void ClassName:: Function(int rollno) 
    {
        cout << rollno << endl;
 }; 
main(){
    ClassName c;
    c.Function(5);
    c.Function(2);
    return 0;
 }
