// Fibonacci series
// Example: 0 1 1 2 3 5 8 13 21 ...
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int fib(int n) {
    if (n < 2) return 1;
    return fib(n - 2) + fib(n - 1);
}

int main() {
    string input;
    // cout << "Welcome! Enter a positive integer for Fibonacci." << endl;
    // cout << "Press 'n' anytime to stop." << endl;
    while (true) {
        static bool shownOnce = false;   // runs only once, ever
        if (!shownOnce) {
            cout << "Welcome! Enter a positive integer for Fibonacci." << endl;
            cout << "Press 'n' anytime to stop." << endl;
            shownOnce = true;
        }
        cout << "Enter input: ";
        cin >> input;

        // convert to lowercase manually (C++ has no .lower() method)
        for (char &ch : input) {
            ch = tolower(ch);
        }

        if (input == "n") {
            cout << "Program stopped." << endl;
            break;
        }

        // try converting string to int (typecasting)
        stringstream ss(input);
        int a;
        ss >> a;

        // check: did conversion consume the WHOLE string cleanly?
        if (ss.fail() || !ss.eof()) {
            cout << "Invalid input. Please enter a number or 'n' to stop." << endl;
            continue;
        }

        if (a < 0) {
            cout << "Please enter a positive integer." << endl;
            continue;
        }

        cout << "Fibonacci at position " << a << " is " << fib(a) << endl;
    }

    return 0;
}
// Output:
// Welcome! Enter a positive integer for Fibonacci.
// Press 'n' anytime to stop.
// Enter input: 5
// Fibonacci at position 5 is 8
// Enter input: -1
// Please enter a positive integer.
// Enter input: 0
// Fibonacci at position 0 is 1
// Enter input: string
// Invalid input. Please enter a number or 'n' to stop.
// Enter input: Y
// Invalid input. Please enter a number or 'n' to stop.
// Enter input: n
// Program stopped.