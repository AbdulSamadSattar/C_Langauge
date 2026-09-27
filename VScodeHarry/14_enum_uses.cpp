#include <iostream>
using namespace std;

enum TrafficLight { Red, Yellow, Green };

void showAction(TrafficLight light) {
    switch (light) {
        case Red:
            cout << "Stop" << endl;
            break;
        case Yellow:
            cout << "Slow down" << endl;
            break;
        case Green:
            cout << "Go" << endl;
            break;
        default:
            cout << "Out of order ! ";
    }
}

int main() {
    TrafficLight c = TrafficLight::Green;  

    if (c == TrafficLight::Green) 
        cout << "It's green!" << endl;
    showAction(c);
    TrafficLight signal = Green;
    showAction(signal);
    return 0;
    
}