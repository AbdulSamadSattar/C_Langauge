#include <iostream>
#include <thread>
#include <chrono>
#include <atomic>
using namespace std;

atomic<bool> done(false);   // shared flag between threads

int fib(int n) {
    if (n < 2) return n;
    return fib(n - 2) + fib(n - 1);
}

void showWaitMessage() {
    int seconds = 0;
    while (!done) {
        this_thread::sleep_for(chrono::seconds(1));
        seconds++;
        if (seconds % 20 == 0 && !done) {
            cout << "wait... still calculating (" << seconds << "s)" << endl;
        }
    }
}

int main() {
    int a = 50;

    thread waiter(showWaitMessage);   // starts printing thread in background

    int result = fib(a);   // this blocks the main thread while calculating
    done = true;            // signal the waiter thread to stop
    waiter.join();           // wait for waiter thread to finish cleanly

    cout << "Fibonacci(" << a << ") = " << result << endl;
    return 0;
}