/*
    learning:
        1. object e string kivabe nite hoy.
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
    Student *sakib = new Student();
    sakib->id = 5796;
    sakib->age = 23;

    strcpy(sakib->name, "Sakib Al Hasan"); // string sorasori '=' assingment operator diye assign kora jay na. strcpy() function use korte hoy.

    cout << sakib->id << " " << sakib->age << " " << sakib->name << endl;

    delete sakib;

    return 0;
}
