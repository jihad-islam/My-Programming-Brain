// user theke multiple input nibo without space in string

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};

int main()
{
    Student a, b;

    cin >> a.name >> a.roll >> a.cgpa; // ekhane name input nite hobe without space. nam e space thakle garbage value dekhabe.
    cin >> b.name >> b.roll >> b.cgpa;

    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    cout << b.name << " " << b.roll << " " << b.cgpa << endl;

    return 0;
}
