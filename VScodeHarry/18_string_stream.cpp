#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss("42abc");
    int num;
    ss >> num;

    cout << "num = " << num << endl;          // 42 (reads digits until non-digit)
    cout << "fail? " << ss.fail() << endl;     // 0 (false) — 42 was validly extracted
    cout << "eof? " << ss.eof() << endl;       // 0 (false) — "abc" still remains unread

    string rest;
    ss >> rest;
    cout << "rest = " << rest << endl;         // "abc"
    cout << "eof now? " << ss.eof() << endl;   // 1 (true) — nothing left
    return 0;
}