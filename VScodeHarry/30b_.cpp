#include <iostream>
#include <cmath>
using namespace std;

class point{
    int num1, num2;
    friend float distance(point p1, point p2);
    public:
    point(int x, int y){
        num1 = x;
        num2 = y;
    }
    void printNumber(){
        cout<<"x = "<<num1<<" and y = "<<num2<<endl;
}};
float distance(point p1, point p2){
    int x1 = p1.num1;
    int y1 = p1.num2;
    int x2 = p2.num1;
    int y2 = p2.num2;
    return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}
int main(){
    point p(10, 20);
    p.printNumber();
    point q(30, 40);
    q.printNumber();
    cout<<"Distance between p and q is "<<distance(p, q)<<endl;
    return 0;
}
// Output:
// x = 10 and y = 20
// x = 30 and y = 40
// Distance between p and q is 28.2843