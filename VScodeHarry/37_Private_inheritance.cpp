#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {} // Default constructor is necessary to avoid compilation error when creating derived class objects without parameters
};

// Creating a Programmer class derived from Employee Base class// Private members of base class are not inherited
class Programmer : Employee// Public members of base class are now being inherited as public members of derived class
{
public: 
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};
int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10); 
    cout << skillF.languageCode<<endl;
    // cout << skillF.id<<endl; // This line will cause an error because 'id' is inherited as private due to private inheritance
    skillF.getData();
    return 0;
}
// Output:
// 34
// 34
// 9
// 10
// 10