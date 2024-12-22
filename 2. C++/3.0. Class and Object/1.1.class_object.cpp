// user theke input nibo without space in string

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
    Student a;

    cin >> a.name >> a.roll >> a.cgpa; // string declare korte notun ekta array te declare kora lagsilo. but string  input direct newa jay.

    cout << a.name << " " << a.roll << " " << a.cgpa << endl;

    return 0;
}
