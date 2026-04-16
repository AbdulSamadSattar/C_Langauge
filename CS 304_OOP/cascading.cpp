#include <iostream>
#include <conio.h>
using namespace std;

class person {
public:
    person& walk() {
        cout << "Walk\n";
        return *this; // Return a reference to the object itself
    }
    person& eat() {
        cout << "Eating like Human\n";
        return *this; // Return a reference to the object itself
    }
};

int main() {
    person p;
    p.eat().walk(); // Cascading method calls
    getch(); // Wait for a keypress before exiting
    return 0;
}
