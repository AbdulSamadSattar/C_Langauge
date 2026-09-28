#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

unsigned long long fib(int n) {
    unsigned long long prev = 0, curr = 1;
    auto start = steady_clock::now();
    int lastPrinted = 0;

    for (int i = 2; i <= n; i++) {
        unsigned long long next = prev + curr;
        prev = curr;
        curr = next;

        auto elapsed = duration_cast<seconds>(steady_clock::now() - start).count();
        if (elapsed >= lastPrinted + 5) { // Print every 5 seconds
            cout << "wait... still calculating (" << elapsed << "s)" << endl;
            lastPrinted = elapsed;
        }
    }
    return curr;
}

int main() {
    int a = 100000000;
    cout << "Fibonacci(" << a << ") = " << fib(a) << endl;
    return 0;
}

// Output:
// Fibonacci(100000000) = wait... still calculating (5s)
// 14139011350745967675