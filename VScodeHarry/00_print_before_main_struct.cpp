#include <iostream>
using namespace std;

struct PrintMessage {
    PrintMessage() { 
        cout << "Hello, world! (Printed before main)\n"; 
    }
};

PrintMessage obj1; // Global object of PrintMessage, constructor runs before main
int main(){}


// OUTPUT:
//Hello, world! (Printed before main)