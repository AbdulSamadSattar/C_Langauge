/*write starter for boiler plate code
"How to change boilerplate code"
snippets -> cpp.json
*/
#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int *ptr; // int ptr = &a; //error
    ptr = &a;
    int **c = &ptr; // poiner to pointer
    cout << "The address a is "<< &a << endl;
    cout << "The address ptr is" << &ptr << endl;
    cout << "The address of c is" << &c << endl;
    cout << "The value of a is " << a << endl;
    cout << "The value of ptr is"<< ptr << endl;
    cout << "The value of c is"<< c << endl;
    cout << "The value of stored in **c is "<< **c << endl;
    cout << "The adress stored in *c is"<< *c << endl;
    cout << "The value of stored in *ptr is "<< *ptr << endl;
    return 0;
}

// OUTPUT:
// The address a is 0x7fff5fbff6ac
// The address ptr is 0x7fff5fbff6a0
// The address of c is 0x7fff5fbff698
// The value of a is 3
// The value of ptr is 0x7fff5fbff6ac
// The value of c is 0x7fff5fbff6a0
// The value of stored in **c is 3
// The adress stored in *c is 0x7fff5fbff6ac
// The value of stored in *ptr is 3