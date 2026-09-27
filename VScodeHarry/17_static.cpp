#include <iostream>
using namespace std;

void counter() {
    static int count = 0;   // initialized ONLY on the first call
    count++;
    cout << "Count: " << count << endl;
}

int main() {
    counter();   // Count: 1
    counter();   // Count: 2
    counter();   // Count: 3
    return 0;
}
// Output:
// Count: 1
// Count: 2
// Count: 3