// math and english er marks jog kore jar beshi tar ta aage print korbo. then duijoner marks same hoye gele id onujayi ascending order e sort korbo.

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math;
    int english;
};

bool cmp(Student x, Student y)
{
    int total1 = x.math + x.english;
    int total2 = y.math + y.english;

    if (total1 == total2)
        return x.id < y.id;

    else
        return total1 > total2;
}

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math >> a[i].english;

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << " " << a[i].math << " " << a[i].english << endl;
    }

    return 0;
}
