/*
    english er marks onujayi descending order e, english er marks same hole maath er marks onujayi descending order e and math marks ow same hole id onujayi ascending order e sajabo.
*/

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
    if (x.english != y.english) // ekjonero english marks same na hole if e dhukbe and english er marks onujayi sort korbo.
        return x.english > y.english;

    else if (x.math != y.math) // ekhn math er condition dibo
        return x.math > y.math;

    else
        return x.id < y.id;
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
