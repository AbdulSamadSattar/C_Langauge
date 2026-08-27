#include <iostream>
using namespace std;

int main() {
    int x = 100;
    int* ptr = &x;
    int** ptr2 = &ptr;   // pointer to a pointer

    cout << "Value: " << **ptr2 << endl;   // dereference twice
    return 0;
}