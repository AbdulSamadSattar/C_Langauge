#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    // Employee harry, rohan, lovish, shruti;
    // harry.setId();
    // harry.getId();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}
// Output:
// Enter the id of employee
// 100
// The id of this employee is 100
// Enter the id of employee
// 200
// The id of this employee is 200
// Enter the id of employee
// 300
// The id of this employee is 300
// Enter the id of employee
// 400 
// The id of this employee is 400