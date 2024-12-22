// sort function use kore marks onujayi descending or ascending order e sort. marks same hole roll onujayi ascending or descinding korbo.

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student a, Student b) // vitorer puro jinish taw shortcut e kora jay. next file e dekhano hoise.
{

    if (a.marks > b.marks)
    {
        return true;
    }

    else if (a.marks < b.marks)
    {
        return false;
    }

    else // boro na, abar choto ow na. that means its equal. equal hole else e ashbe.
    {
        // if (a.roll < b.roll)
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }

        return a.roll < b.roll; // roll er shortcut
    }
}

int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}
