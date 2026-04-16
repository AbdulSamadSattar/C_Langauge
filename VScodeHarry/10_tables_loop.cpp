#include <iostream>
#include <windows.h>
#include <iomanip> // Required for setw()
using namespace std;
int i, n;
int main(){
    cout<<"Enter table: ";
    cin>>n;
    for (i=1; i<=10; i++){
        cout<<n<<" X "<<i<<" = "<<setw(3)<<(n*i)<<endl;
        Sleep(1000);
    }
}

