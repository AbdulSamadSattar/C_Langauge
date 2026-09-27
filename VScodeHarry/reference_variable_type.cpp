#include <iostream>
using namespace std;

int main() {
    float x= 455.9f;
    float &y = x; 
    int integer = 9;
    cout<<"x = " << x <<"   y = "<< y << endl;
    cout<<"&y = "<< &y << "     &x = "<< &x << endl;
    int cast = int(x); 
    cout<< "int(x): "<<int(x)<< "  x = " << x << " cast: "<< cast <<endl;//typecasting
    cout<< y<<endl<<float(integer);//typecasting
    cout<<endl<<typeid(x).name();
} 
// Output:
// x = 455.9   y = 455.9
// &y = 0x61ff0c     &x = 0x61ff0c
// int(x): 455  x = 455.9 cast: 455
// 455.9
// 9.0
// f