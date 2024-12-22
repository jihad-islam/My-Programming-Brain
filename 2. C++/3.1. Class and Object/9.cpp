/*
    learning:
        1. user define function theke value return kora
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

Student *compare(Student *s, Student *t) // user defined function.
{
    return s->age < t->age ? t : s; // ternary operator use kore return kora hoise.
}

int main()
{
    char name[100];
    int id, age;
    cin >> id >> age;
    getchar();
    cin.getline(name, 100);

    Student *sakib = new Student(id, age, name); // ekhane parameterized constructor use kore input newa hoise

    Student *tamim = new Student(); // ekahne default constructor use kore input newa hoise.
    tamim->id = 1234;
    tamim->age = 25;
    strcpy(tamim->name, "Tamim Iqbal");

    Student *ans = compare(sakib, tamim);

    cout << ans->name << " is senior" << endl;

    delete sakib;

    return 0;
}
