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

    friend ostream& operator<<(ostream& output, Test& out) {
        output << "\n\nName: " << out.name;
        output << "\tAge: " << out.age;
        return output;
    }
};

int main() {
    Test t1;
    cout << "\nEnter name and age: ";
    cin >> t1;
    cout << t1;
    return 0;
}
