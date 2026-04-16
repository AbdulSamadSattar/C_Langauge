#include <iostream>
#include <conio.h>
using namespace std;
class person{
    public:
        void walk(){
            cout<<"Walk\n";
        }
        void eat(){
            cout<<"\nEating like Human\n";
        }
    };
class fish{
    public:
        void swim(){
            cout<<"\nSwim\n";
        }
        void eat(){
            cout<<"\nEating like fish\n";
        }
};
class mermaid: public fish, public person
{

};
int main(int argc, char *argv[])
{
    mermaid m;
    m.walk();
    m.swim();
    // m.eat() //ambigious Error
    m.person::eat();
    m.fish::eat();
    getch();
    system("PAUSE");
    return 0;

}