/*
    learning:
        1. using default and paramiterized construction
        2. learning comparison using function
        3. how to pass an object in a function
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

void compare(Student *s, Student *t)
{
    // s->age < t->age ? cout << "Tamim is senior" << endl : cout << "Sakib is senior" << endl; // ekhane ternary operator use kora hoise. chaile if, else if diyew compare kora jeto.

    cout << (s->age < t->age ? t->name : s->name) << " is senior" << endl; // ternary operator use kora hoise. chaile uporer line er moto likhte pari or evabew likhte pari.
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

    compare(sakib, tamim); // function call and function call er maddhome object ke function e pass korsi.

    delete sakib;

    return 0;
}
