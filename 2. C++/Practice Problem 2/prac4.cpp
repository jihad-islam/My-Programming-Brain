// amake 3 ta student er info newa lagbe, then tader moddhe compare kore jar marks beshi tar info print korbo. ekhane testcase ase.

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int marks;

    Student(int id, char name[101], char section, int marks)
    {
        this->id = id;
        strcpy(this->name, name);
        this->section = section;
        this->marks = marks;
    }
};

void compare(Student *st1, Student *st2, Student *st3)
{
    if (st1->marks >= st2->marks && st1->marks >= st3->marks)
    {
        cout << st1->id << " " << st1->name << " " << st1->section << " " << st1->marks << endl;
    }

    else if (st2->marks >= st1->marks && st2->marks >= st3->marks)
    {
        cout << st2->id << " " << st2->name << " " << st2->section << " " << st2->marks << endl;
    }

    else if (st3->marks >= st1->marks && st3->marks >= st2->marks)
    {
        cout << st3->id << " " << st3->name << " " << st3->section << " " << st3->marks << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int id, marks;
        char section;
        char name[101];

        cin >> id;

        cin >> name;
        cin >> section >> marks;

        Student *st1 = new Student(id, name, section, marks);

        cin >> id;

        cin >> name;
        cin >> section >> marks;

        Student *st2 = new Student(id, name, section, marks);

        cin >> id;

        cin >> name;
        cin >> section >> marks;

        Student *st3 = new Student(id, name, section, marks);

        compare(st1, st2, st3);

        delete st1;
        delete st2;
        delete st3;
    }

    return 0;
}
