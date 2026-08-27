#include <iostream>
using namespace std;

int main(){
    int a = 10; // stack

    int* ptr = new int(20); // heap

    cout << a << endl;
    cout << *ptr << endl;

  
    delete ptr;// "I am finished using the dynamically allocated object. Release its memory."
    ptr = nullptr; //Best practice
    return 0;
}

