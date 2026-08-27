#include <iostream>
// #include <cstddef>   // for size_t (often not even needed explicitly)
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    // size_t used for array length and indexing
    size_t length = 5; //int can also used size_t

    for (size_t i = 0; i < length; i++) 
        cout << "arr[" << i << "] = " << arr[i] << endl;
    
    return 0;
}