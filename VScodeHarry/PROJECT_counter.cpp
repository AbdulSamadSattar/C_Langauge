#include <iostream>
#include <string>  // Include string library
using namespace std;

int main() {
    int counter = 0;
    string input;
    cout << "------- Counter Program -------\n";
    cout << "Press '0' to stop the program.\n";
    cout << "Enter something (or press Enter to increase counter): ";
    while (true) {
        // cout << "Enter something (or press Enter to increase counter): ";
        getline(cin, input); // Read entire input (including empty string)

        if (input == "0") { // Stop condition
            break;
        }
        if (input.empty()) { // Check if input is empty
            counter++;
        }

        cout << "Counter: " << counter << endl;
    }

    cout << "\nFinal Counter Value: " << counter << endl;
    cout << "Program stopped!";
    return 0;
}
