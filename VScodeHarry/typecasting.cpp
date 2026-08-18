#include <iostream>
using namespace std;
float value = 25.7;
int main(){
    cout<<"The value of (int)float is "<<(int)value<<endl;
    cout<<"The size of float value = 25.7 is "<<sizeof(value)<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl; 
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl; 
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl; 
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl; 
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl; 
}