#include <iostream>
using namespace std;
union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};

int main(){
        union money m1;
        m1.rice = 34;
        m1.car = 'J';
        cout<<m1.rice<<endl;
        cout<<m1.car<<endl;
        return 0;
}