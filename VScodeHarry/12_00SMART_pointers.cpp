#include <iostream>
#include <memory>
using namespace std;

class Demo {
public:
    Demo() { cout << "Constructed" << endl; }
    ~Demo() { cout << "Destroyed" << endl; }
    void show() { cout << "Hello from Demo" << endl; }
};

int main() {
    // (a) unique_ptr — sole ownership, no copying allowed
    unique_ptr<Demo> uptr = make_unique<Demo>();
    uptr->show();

    // (b) shared_ptr — shared ownership, reference-counted
    shared_ptr<Demo> sptr1 = make_shared<Demo>();
    shared_ptr<Demo> sptr2 = sptr1;   // both share ownership
    cout << "Use count: " << sptr1.use_count() << endl;

    // (c) weak_ptr — non-owning reference to a shared_ptr, avoids cycles
    weak_ptr<Demo> wptr = sptr1;
    if (auto locked = wptr.lock()) {
        locked->show();
        Demo d; 
        // locked->~Demo();
    }

    return 0;
}   // all memory automatically freed here — no delete needed