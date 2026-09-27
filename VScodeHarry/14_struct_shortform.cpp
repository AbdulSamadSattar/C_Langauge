#include <iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;

int main(){
    ep harry;
    struct employee shubham;
    struct employee rohanDas;
    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 120000000;
    cout<<"The value is: "<<harry.eId<<endl; 
    cout<<"The value is: "<<harry.favChar<<endl; 
    cout<<"The value is: "<<harry.salary<<endl; 
    cout<<"In empty struct: "<<shubham.eId<<endl; //-2 (garbage value)
    return 0;
}