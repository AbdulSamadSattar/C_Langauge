#include <iostream>
using namespace std;

void greet() {
    cout << "Hello from function!" << endl;
}

int main() {
    void (*funcPtr)() = greet;   // pointer to function
    funcPtr();                    // calls greet()
    return 0;
}