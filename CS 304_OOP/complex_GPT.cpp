#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
    float z;
    float theta;

public:
    void setNumber(float i, float j) {
        z = sqrt(i * i + j * j);
        if (i != 0) {
            theta = atan(j / i);
        } else {
            if (j > 0) {
                theta = M_PI / 2;
            } else if (j < 0) {
                theta = -M_PI / 2;
            } else {
                theta = 0;
            }
        }
    }

    void display() {
        cout << "Magnitude: " << z << ", Angle: " << theta << " radians" << endl;
    }
};

int main() {
    Complex c;
    c.setNumber(3, 4); // Set a complex number with real part 3 and imaginary part 4
    c.display(); // Display the magnitude and angle of the complex number
    return 0;
}
