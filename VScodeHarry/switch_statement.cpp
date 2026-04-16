#include <iostream>
using namespace std;
int age;
//it will be better with if-else
void check(){
    switch (age)
    {
    case 10:
        cout<<"\n You only enjoy kid zone."<<endl;
        break;
    case 18:
        cout<<"\n Except kid zone, You can enjoy the whole park."<<endl;
        break;
    case 65:
        cout<<"\n You are not allowed to sit in any swing"<<endl;
        cout<<"\n You are not allowed to sit in any swing"<<endl;
        break;
    
    default:
        cout<<"Entry not Valid";
    }
}

int main(){
    cout<<"Enter Age: ";
    cin>>age;
    check();
}