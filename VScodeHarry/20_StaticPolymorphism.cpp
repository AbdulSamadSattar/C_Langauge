// Proof: overloading with user input stays static

#include <iostream>
using namespace std;

void show(int x)    { cout << "int version: " << x << endl; }
void show(double x) { cout << "double version: " << x << endl; }

int main() {
    int n;
    cin >> n;      // input taken at runtime

    show(n);       // compiler already chose show(int) at compile time
    return 0;
}
// Output:
// 2.55555
// int version: 2