#include <iostream>
using namespace std;
int* test() {
    int* x = new int(10);
    return x;
}
/*
//---Stack variable--
int* stacktest() {
    int y = 10;
    return &y;  // ❌ Wrong
}//y is a local variable whose lifetime ends when stacktest() returns*/

int main() {
    int* ptr = test();
    cout << *ptr << endl;
    delete ptr;
    return 0;
}