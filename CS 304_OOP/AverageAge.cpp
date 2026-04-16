#include <iostream> 
using namespace std;
 // declaration of variables, the age will be in whole numbers 
int age1, age2, age3, age4, age5, age6, age7, age8, age9, age10; 
int TotalAge, AverageAge;  

int main () 
{ 
 // take ages of the students from the user 
 cout << "Please enter the age of student 1: "; 
 cin >> age1; 
 cout << "Please enter the age of student 2: "; 
 cin >> age2; 
 cout << "Please enter the age of student 3: "; 
 cin >> age3; 
// calculate the total age and average age 
TotalAge = age1 + age2 + age3;
AverageAge = TotalAge / 3; 
 
 // Display the result ( average age ) 
 cout << "Average age of class is: " << AverageAge; 
 return 0;
}