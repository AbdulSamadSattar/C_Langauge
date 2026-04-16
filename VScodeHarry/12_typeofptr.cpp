#include <iostream>
using namespace std;

int main(){
    // cout << "\n--**Null Pointer**--\n";
    // int *ptr = NULL;  // or int *ptr = NULL;
    // cout << ptr << endl;
    // cout << &ptr << endl;
    // ptr = NULL;
    // cout << ptr << endl;
    // cout << &ptr << endl;  // Output: 0 (or a null value)

    cout << "\n--**Void Pointer**--\n";
    int a = 10;
    void *ptr = &a;  // Stores the address of 'a'

    cout << ptr;  // Prints the address of 'a'
    // cout << *ptr;  // ❌ Error: Cannot dereference a void pointer

    // To use it, cast it to the correct type
    cout << *(static_cast<int*>(ptr));  // ✅ Correct way


    return 0;
}