#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new int; // evabe dynamic memory create korte hoy

    *a = 10;

    cout << *a << endl
         << a << endl;

    delete a; // dynamic variable delete

    return 0;
}