#include <iostream>
using namespace std;

class Test {
public:
    int age;
    string name;

    friend istream& operator>>(istream& input, Test& o) {
        input >> o.name;
        input >> o.age;
        return input;
    }

};

int main() {
    Test t1;
    cout << "\nEnter name and age: ";
    cin >> t1;
    cout << "\n\n" << t1.name << "\t" << t1.age;
  
    return 0;
}
