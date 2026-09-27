#include <iostream>
#include <iomanip>   // required for setw
using namespace std;

int main() {
    cout << setw(4) << 5 << endl;
    cout << setw(4) << 25 << endl;
    cout << setw(4) << 125 << endl;
    return 0;
}

// OUTPUT:
//    5
//   25
//  125