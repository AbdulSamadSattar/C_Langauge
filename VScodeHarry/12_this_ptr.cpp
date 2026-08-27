#include <iostream>
using namespace std;

class Box {
    int side;
public:
    void setSide(int side) {
        this->side = side;   // 'this' distinguishes member from parameter
    }
    void show() {
        cout << "Side: " << this->side << endl;
    }
};

int main() {
    Box b;
    b.setSide(7);
    b.show();
    return 0;
}