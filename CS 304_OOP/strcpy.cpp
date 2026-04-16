#include <iostream>
#include <cstring>

using namespace std;
int main(){
    char destination[20]; // Make sure 'destination' has enough space
    const char *source = "Copy this!";
    strcpy(destination, source);
// 'destination' now contains the copied string
    cout<<destination;

}
