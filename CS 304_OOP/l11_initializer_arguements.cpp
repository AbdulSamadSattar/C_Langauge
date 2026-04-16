#include <iostream>
using namespace std;

class student {
    int roll;
    string name; /*here char below string will not work. All other 3 option will work.Both char * and string AND here string below char*/
public:
    student(int r,char *n): roll(r), name(n) { //Both string is best
    }
    void display(){
        cout << "Roll No: " << roll << endl ;
        cout << "Name: " << name << endl ;
    }
};
int main() {
    student s(10,"ASAD");
    s.display();
}
