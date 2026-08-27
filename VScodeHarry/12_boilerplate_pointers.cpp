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