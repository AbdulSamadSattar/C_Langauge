#include <iostream>
using namespace std;

class Base {
private:
    int a = 1;
protected:
    int b = 2;
public:
    int c = 3;

    void showAll() {   // inside the class: all three accessible
        cout << a << " " << b << " " << c << endl;
    }
};

int main() {
    Base obj;
    obj.showAll();       // 1 2 3
    cout << obj.c << endl;   // OK: public
    // cout << obj.b;        // ERROR: protected
    // cout << obj.a;        // ERROR: private
    return 0;
}
// Output:
// 1 2 3
// 3