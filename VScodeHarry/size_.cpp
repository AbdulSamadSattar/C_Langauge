#include <iostream>
#include <string>
using namespace std;

int main() {
    short s = 10;
    int i = 100;
    float f = 3.14f;
    char c = 'A';
    string str = "Hello";

    cout << "Size of short: " << sizeof(s) << " bytes" << endl;
    cout << "Size of int: " << sizeof(i) << " bytes" << endl;
    cout << "Size of float: " << sizeof(f) << " bytes" << endl;
    cout << "Size of char: " << sizeof(c) << " bytes" << endl;
    cout << "Size of string object: " << sizeof(str) << " bytes" << endl;
    cout << "Length of string content: " << str.length() << " characters" << endl;

    return 0;
}
// Output:
// Size of short: 2 bytes
// Size of int: 4 bytes
// Size of float: 4 bytes
// Size of char: 1 bytes
// Size of string object: 24 bytes
// Length of string content: 5 characters