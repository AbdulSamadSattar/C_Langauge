#include <iostream>
using namespace std;

int main(){
    // int *ptr = NULL;  // or 
    int *ptr = nullptr;
    cout << ptr << endl;
    cout << &ptr << endl;
    ptr = NULL; //string ptr = "NULL"; error
    cout << "ptr : "<< ptr << endl;
    cout << "&ptr: "<< &ptr << endl;  // Output: 0 (or a null value)
    cout << "*ptr: "<< *ptr;
    return 0;
}
// \n--**Null Pointer**--\n"
