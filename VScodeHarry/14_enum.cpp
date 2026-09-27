#include <iostream>
using namespace std;
enum Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

int main(){
    int day = 3;   // what does 3 mean?? Wednesday? Who knows without checking a comment
    if (day == 1) cout << "Monday" << endl;
    else if (day == 3) cout << "Wednesday" << endl;
    // ... error-prone, unreadable, easy to typo the number
  
    Day today = Wednesday;   // self-documenting!
    // Day today = 100;       // ERROR (with enum class) — not a valid Day value
    if (today == Wednesday) 
        cout << "It's Wednesday!" << endl;

    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout << "Lunch m1: " << m1<< endl;
    cout << "Dinner: " << dinner<<endl;
    cout << (m1==2);
    return 0;
}