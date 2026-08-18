#include <iostream>
using namespace std;

int main(){
    int *ptr = NULL;  // or int *ptr = NULL;
    cout << ptr << endl;
    cout << &ptr << endl;
    ptr = NULL;
    cout << ptr << endl;
    cout << &ptr << endl;  // Output: 0 (or a null value)
    return 0;
}
// \n--**Null Pointer**--\n"
