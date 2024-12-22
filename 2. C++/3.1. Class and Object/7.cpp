/*
    learning:
        1. taking input of a object from user
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    int age;
    char name[100];

    Student() // default constructor
    {
        cout << "Default constructor called" << endl;
    }

    Student(int id, int age, char name[100]) // parameterized constructor
    {
        this->id = id;
        this->age = age;

        strcpy(this->name, name);
    }
};

int main()
{
    char name[100];
    int id, age;
    cin >> id >> age;
    getchar();
    cin.getline(name, 100);

    Student *sakib = new Student(id, age, name); // evabe object er input nite hoy. age input nibo then object declare korbo.

    cout << sakib->id << " " << sakib->age << " " << sakib->name << endl;

    delete sakib;

    return 0;
}
