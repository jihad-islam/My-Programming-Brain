#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new int[3];
    int *b = new int[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    delete[] a; // ekhane dynamic array delete korsi. but static pointer variable delete kori nai.

    a = new int[5]; // jehetu pointer variable ta memory te ase. tai pointer variable 'a' te notun ekta dynamic array declare korlam

    for (int i = 0; i < 3; i++)
    {
        a[i] = b[i];
    }

    delete[] b; // second dynamic array delete

    a[3] = 40; // a[3] and a[4] faka ase. ei duitay ja iccha korbo
    a[4] = 50;

    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";

    return 0;
}