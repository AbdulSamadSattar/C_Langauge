#include <iostream>
using namespace std;
inline int product(int a, int b){
    // Not recommended to use below lines with inline functions
    static int c=0; // This executes only once
    c = c + 1; // Next time this function is run, the value of c will be retained
    // cout << c << endl;
    return a*b;
}
int main(){
    int a, b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<product(9,7);
    return 0;
}

// OUTPUT:  
// Enter the value of a and b
// 5 7
// The product of a and b is 35
// 63