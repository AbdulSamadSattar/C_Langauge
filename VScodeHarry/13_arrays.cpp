#include <iostream>
using namespace std;

int main(){
    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<*(mathMarks+2) <<endl;
    cout<< *(mathMarks+3) <<endl;
    cout<<"mathMarks: " << mathMarks+2 <<endl;    //0x61ff08
    cout<<"mathMarks: " << (mathMarks+3) <<endl  ;//0x61ff0c
    int* p = mathMarks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    return 0;
}
// OUTPUT:
// These are math marks
// 2278
// 738
// 378
// 578
// mathMarks: 0x61ff04
// mathMarks: 0x61ff08
// 2278
// 378