#include<iostream>
#include<conio.h>
using namespace std;
class shape{ // Abstract cLass
    public:
        virtual void draw() = 0; // Pure Virtual
};
class line: public shape { // Concrete cLass
    public:
        virtual void draw(){ // Virtual maynot use
          cout << "\n\n line class";
        }
};
main(){
    shape *s;
    s = new line;
    s -> draw();
    return 0;
}