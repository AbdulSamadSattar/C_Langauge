#include<iostream>
#include"headerfile.h"
using namespace std;
int glo = 10; //assignment at the time of declaration or inside the function
// glo = 56; // assignment can't be outside the function
void function(){
    cout<<"global value = "<< glo<<endl;
}
int main(){
    hello();
    function();
    int local, glo=9;
    local = 20;
    // glo = 100;
    cout<<"Local Variable is  = "<<local<<endl;
    cout<<"Global Variable is = "<<glo<<endl;
    cout<<"Actual Global value is = "<<::glo<<endl; 
}