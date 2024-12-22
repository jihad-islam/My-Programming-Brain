// array of object use kore minimum marks ber korlam

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;

    Student a[n]; // object er array

    for (int i = 0; i < n; i++)
    {

        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    // ekhane 'mn' variable er sathe ami marks compare korbo
    int mn = INT_MAX; // minimum marks ber korbo tai variable nilam

    for (int i = 0; i < n; i++)
    {
        if (a[i].marks < mn)
        {
            mn = a[i].marks;
        }
    }

    cout << mn << endl;

    return 0;
}