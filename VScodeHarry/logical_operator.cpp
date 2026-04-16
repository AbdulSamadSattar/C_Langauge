#include <iostream>
using namespace std;

int NOR(int A, int B) {
    return !(A | B);  // Bitwise OR (|) followed by NOT (!)
}

int main(){
    int a = 10, b = 20;
    cout<<"a < b = "<<((a < b) & (a < 9))<<endl<<endl;

    cout << "NOR(0,0) = " << NOR(0,0) << endl;
    cout << "NOR(0,1) = " << NOR(0,1) << endl;
    cout << "NOR(1,0) = " << NOR(1,0) << endl;
    cout << "NOR(1,1) = " << NOR(1,1) << endl;
}