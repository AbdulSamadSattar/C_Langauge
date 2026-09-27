#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter something: ";
    getline(cin, input);

    if (input.empty()) {
        cout << "You entered nothing!" << endl;
    } else {
        cout << "You entered: " << input << endl;
    }

    return 0;
}