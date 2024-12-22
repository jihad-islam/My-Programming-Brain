// array of object use kore jar minimum marks and maximum marks tar full detail print korbo

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

    // int mn = INT_MAX; // minimum marks ber korbo tai variable nilam

    // just marks print korte ami variable er sathe compare korsilam. but full details print korte puro ekta object nite hobe. karon ami shudhu marks print krobo na. object er shobkichui print korbo.
    Student mn;
    mn.marks = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[i].marks < mn.marks)
        {
            mn = a[i]; // 'a' object er purota 'mn' object e copy korlam
        }
    }

    // for max
    Student mx;
    mx.marks = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i].marks > mx.marks)
        {
            mx = a[i]; // 'a' object er purota 'mx' object e copy korlam
        }
    }

    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;
    cout << mx.name << " " << mx.roll << " " << mx.marks << endl;

    return 0;
}