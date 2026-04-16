#include<iostream>
#include<conio.h>
using namespace std;
class shape{ // Abstract cLass
    public:
        virtual void draw() = 0; // Pure Virtual
        virtual void show(){
          cout << "\n shape class";
        }
};
class line: public shape { // Concrete cLass
    public:
        virtual void draw(){ // Virtual maynot use
          cout << "\n\n line class";
        }
        void show(){ // Virtual maynot use
          cout << "\n\n Sow funct. line class";
        }
};
main(){
    shape *s;
    s = new line;
    s -> draw();
    s ->show();
    return 0;
}