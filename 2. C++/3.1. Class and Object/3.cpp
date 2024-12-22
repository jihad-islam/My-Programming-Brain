/*
    learning:
        1. ekhane default constructor comment out kora ase erporew code run korse that means default constructor hidden thaklew object create korar sathe sathe hidden constructor ta call hoye jabe.
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    int age;
    char name[100];

    // Student() // default constructor
    // {
    //     cout << "Default constructor called" << endl;
    // }
};

int main()
{
    Student *sakib = new Student(); // dynamic object create korlam
    sakib->id = 5796;

    Student tamim; // static object create korlam
    tamim.id = 5573;

    cout << sakib->id << " " << tamim.id << endl;

    delete sakib;

    return 0;
}
