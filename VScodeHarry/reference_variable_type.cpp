#include <iostream>
using namespace std;

int main() {
    float x= 455.9f;
    float &y = x; 
    int integer = 9;
    cout<<int(x)<<endl<<y<<endl<<float(integer);//typecasting
    cout<<endl<<sizeof(x);
    cout<<endl<<typeid(x).name();


} 