#include <iostream>
#include <cmath>
using namespace std;
int num;
// Inline function definition
inline double squareroot(float x) {
    return sqrt(x);
}

int main() {
    cout << "_____\"Square Root\"_______ "<<endl;
    cout << "Enter Value: ";
    cin >> num;
    // Calling the inline function
    double result = squareroot(num);
    
    cout << "Square root of " << num << " is " << result << endl;
    
    return 0;
}
