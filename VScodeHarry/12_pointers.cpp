#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int *b = &a;  // storing address of a; to deference(take value of) "a" write cout<<*b, cout<<b; address of a
    // int *b = a; //error; does not pointing to any memory address
    cout<< b  <<endl;
    cout<< *b <<endl;
    cout<< "\n\n Pointer to pointer\n";
    int **c = b;
    cout<< &b << endl;
    cout<< c << endl;
    cout<< *c << endl;
    cout<< **c << endl;
    return 0;
}