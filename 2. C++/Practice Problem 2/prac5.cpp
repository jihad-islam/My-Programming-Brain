// n shonkhok data dibe. marks onujayi descending order e sort korbo. but marks same hole roll onujayi ascending sort korbo.

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student x, Student y)
{
    if (x.marks == y.marks)
        return x.roll < y.roll;

    else
        return x.marks > y.marks;
}

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i].name >> a[i].roll >> a[i].marks;

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;

    return 0;
}
