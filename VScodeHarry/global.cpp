#include<iostream>
#include"headerfile.h"
using namespace std;
int glo = 10; //assignment at the time of declaration or inside the function
// glo = 56; // error: assignment can't be outside the function
void function(){
    cout<<"global value = "<< glo<<endl;
}
int main(){
    hello();
    function();
    int local, glo=9;
    local = 20;
    // glo = 100; //no error but it will change the value of local glo not the global glo
    cout<<"Local Variable is  = "<<local<<endl;
    cout<<"Global Variable is = "<<glo<<endl;
    cout<<"Actual Global value is = "<<::glo<<endl; 
}
// output:
// Hello from header file!
// global value = 10
// Local Variable is  = 20
// Global Variable is = 9
// Actual Global value is = 10