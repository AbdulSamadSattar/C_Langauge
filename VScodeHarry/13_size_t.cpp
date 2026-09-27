#include <iostream>
// #include <cstddef>   // for size_t (often not even needed explicitly)
using namespace std;

int main() {
    char a, &b = a; // can't do this to array
    int arr[5] = {10, 20, 30, 40, 50}; //arr points to first value
    // int &arr[];//error: name is also address of pointer in ARRAYS
    char array[] = {'a','b','c','d'}; //intelligent enough to put 4 i.e array [4]
    cout<<"*array: " << *array << endl;
    cout<<"*(array+0): " << *(array+0) << endl;
    cout<<"*(array+1): " << *(array+1) << endl;
    cout<<"*(array+2): " << *(array+2) << endl;
    cout<<"*(array+3): " << *(array+3) << endl;
    cout<<"*(array+4): " << *(array+4) << endl;
    // size_t used for array length and indexing
    size_t length = 5; //int can also used size_t //if length = 6 arr[5] give rubbish value

    for (size_t i = 0; i < length; i++) 
        cout << "arr[" << i << "] = " << arr[i] << endl;
    
    return 0;
}
// OUTPUT:
// *array: a
// *(array+0): a
// *(array+1): b
// *(array+2): c
// *(array+3): d
// *(array+4): 

// arr[0] = 10
// arr[1] = 20
// arr[2] = 30
// arr[3] = 40
// arr[4] = 50