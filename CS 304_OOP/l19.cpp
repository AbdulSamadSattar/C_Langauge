#include <iostream>
#include <conio.h>
using namespace std;
class Test
// Exraction Operator Overloading
{
    public:
        int age;
        string name;
        friend istream &operator >>(istream &anyword, Test &o)
        {
            input >> o.name;
            input >> o.age;
            return anyword;
        }

        friend ostream &operator <<(ostream &output, Test &out)
        {
            output << "\n\n Name: << out.name;
            output << "\t Age: <<< out.age;
            return output;
        }
};

int main()
{
    Test t1;
    cout<<"\n enter name and age:  ";
    cin>>t1;
    cout<<t1;
    getch();
    return 0;
}