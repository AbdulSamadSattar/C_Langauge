// to use boilerplate write starter
#include <iostream>
using namespace std;
int i =1 ;
int main(){
    cout<<i<<endl;
    int i =1 ;
    for (int i = 8; true; i++)
    {
        cout<<"Before if "<<i<<endl;
        if(i < 10)
            continue;
        if(i > 20)
            break;
        if(i % 2 == 1)
            cout<<i<<endl;
        
    }
    return 0;
}