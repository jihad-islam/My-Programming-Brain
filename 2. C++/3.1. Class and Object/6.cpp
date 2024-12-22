/*
    learning:
        1. ekta class e multiple constructor thakte pare, but condition holo constructor gula vinno hote hobe, tader parameter gulo vinno hote hobe.
        2. concept of this pointer
        3. constructor e string define kora
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
        this->id = id;   // this pointer holo kono object er reference. that means this pointer always kono object ke point kore.
        this->age = age; // main function e sakib holo object. tai this pointer sakib er referance ke bujhaitese.

        strcpy(this->name, name); // constructor er moddhe evabe string define korbo
    }
};

int main()
{
    char name[100] = "Sakib Al Hasan";
    Student *sakib = new Student(5796, 24, name); // ekahne sakib holo object, sakib object ta Student() parameter ke call korse.

    cout << sakib->id << " " << sakib->age << " " << sakib->name << endl;

    delete sakib;

    return 0;
}
