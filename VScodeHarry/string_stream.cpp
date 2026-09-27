// String Stream: It lets you treat a string like an input/output stream (similar to cin/cout), which is very useful for converting between strings and numbers, and for parsing text.

#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss("123");
    int num;
    ss >> num;   // extracts "123" from the stream into num

    cout << "Number: " << num << endl;
    return 0;
}
// Output:
// Number: 123

// Function	Purpose
// .fail()	Returns true if the last extraction failed (e.g., tried to read a letter into an int)
// .eof()	Returns true if the stream has reached the end — no more characters left to read
// .good()	Returns true if the stream is in a normal, usable state (no errors, not at EOF)
// .bad()	Returns true if a serious/unrecoverable error occurred (rare — e.g., memory failure)
// .clear()	Resets the stream's error flags so you can use it again after a failure
// .str()	Gets or sets the underlying string content of the stringstream
// .ignore(n)	Skips/discards the next n characters in the stream