#include <iostream>
#include <cstring>

using namespace std;
int main(){
    const char *myString = "HelloWorld";
    size_t length = strlen(myString);
    // 'length' now contains the number of characters in the string
    cout << length; 
}
