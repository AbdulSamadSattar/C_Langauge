#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {a = 0; b =0;}

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x){
        a = x;
        b = 0;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1, c2(4, 6), c3(5);
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}
// Output:
// Your number is 0 + 0i
// Your number is 4 + 6i
// Your number is 5 + 0i   