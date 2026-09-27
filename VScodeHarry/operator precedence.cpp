#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 10;
    int result = a * 5 + b - 45 + 87;
    cout << "Result: " << result << endl;
    return 0;
}
// OUTPUT:
// Result: 67

// a * 5  → 3 * 5  = 15        // * has higher precedence, done first
// 15 + b → 15 + 10 = 25       // then + and - evaluated left to right
// 25 - 45 = -20
// -20 + 87 = 67