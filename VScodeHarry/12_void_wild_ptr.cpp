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