#include <iostream>
using namespace std;

int main() {
    int a = 10;
    void* ptr = &a;   // void pointer holding address of int
    cout << "ptr: " << ptr <<endl ;
    cout << "* ptr : error " << endl;
    cout << "Value: " << *(static_cast<int*>(ptr)) << endl;
    cout << *(int*)ptr << endl <<endl;   // must cast before dereferencing

    cout << "---wild pointers--\n";
    int* wildptr;   // wild pointer — not initialized
    //cout << "wildptr: "<< wildptr<<endl; 
    
    int val = 50;
    wildptr = &val; // no longer wildptr

    cout << "*wildptr: "<< *wildptr<<endl;// undefined behavior! never do this
    // cout << "&wildptr: " << &wildptr<< endl<<endl;  
    *wildptr = 20; // wrong approach! undefined behavior
    cout << "wildptr: "<< wildptr<<endl;  
    cout << "*wildptr: "<< *wildptr <<endl;
    // cout << "&wildptr: " << &wildptr<< endl<<endl; 
    wildptr = nullptr;   // fix: always initialize pointers
    cout << "wildptr: "<< wildptr<<endl;
    cout << "*wildptr: "<< *wildptr<<endl; //undefined behavior
    // cout << "&wildptr: " << &wildptr<< endl;
    return 0;   
}
// if you run this code, you will get a segmentation fault error because we are trying to dereference a wild pointer. A wild pointer is a pointer that has not been initialized to point to a valid memory location. In this case, the wild pointer `wildptr` is declared but not initialized, and when we try to dereference it with `*wildptr`, it leads to undefined behavior and causes a segmentation fault. so you must have to reset the wild pointer to nullptr after using it to avoid undefined behavior.
// After running this code, you will get the following output:
// ptr: 0x7ffee3b8c9ac