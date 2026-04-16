#include <iostream>
using namespace std;

struct PrintMessage {
    PrintMessage() { 
        cout << "Hello, world! (Printed before main)\n"; 
    }
};

PrintMessage obj1;
int main(){}