// jar marks beshi tar information aage print korbo. marks same hole jar roll kom take aage print korbo.

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
    Student a[n];

    // input loop
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    // sort loop. selection sort e duita for loop lage.
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].marks < a[j].marks) // marks er vitti te descending order sort. ascending order er jonne '>' ei sign use korbo.
            {
                swap(a[i], a[j]); // swap function use korlei hobe. temp = 0 dhore swap er proyojon nai.
            }

            if (a[i].marks == a[j].marks) // jodi marks soman hoy tahole roll onujayi sort korbo.
            {
                if (a[i].roll > a[j].roll) // ascending sort
                {
                    swap(a[i], a[j]);
                }
            }
        }
    }

    // output
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}