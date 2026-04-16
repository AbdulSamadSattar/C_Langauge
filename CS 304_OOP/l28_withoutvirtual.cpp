#include<iostream>
#include<conio.h>
using namespace std;
class shape{
    public:
        void draw(){
          cout << "\n Function of shape class";
        }
};
class line: public shape {
    public:
        void draw(){ //Function overridiing
          cout << "\n\n Function of line class";
        }
};
class circle: public shape {
    public:
        void draw(){ 
          cout << "\n\n Function of circle class";
        }
};
main(){
    shape *s;
    s = new line;
    s -> draw();
    s = new circle;
    s -> draw();
    return 0;
}