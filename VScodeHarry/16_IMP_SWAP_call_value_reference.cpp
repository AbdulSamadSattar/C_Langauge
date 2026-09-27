#include<iostream>
using namespace std;

// This will not swap a and b
void swap(int a, int b){ //temp a b
    int temp = a;        //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}

// Call by reference using pointers
void swapPointer(int* a, int* b){ //temp a  b
    int temp = *a;                //4    4  5   
    *a = *b;                      //4    5  5
    *b = temp;                    //4    5  4 
}

// Call by reference using C++ reference Variables
int & swapReferenceVar(int &a, int &b){ //temp a b
    int temp = a;          //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
    return a;
}

int main(){
    int x =4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapReferenceVar(x, y) = 766; //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}
// Output:
// The value of x is 4 and the value of y is 5
// The value of x is 766 and the value of y is 4