/*
    1. duita function ei dynamic variable er address print korbo.
    2. duita function ei dynamic variable er address same pabo karon dynamic varible function return er porew delete hoye jay na.
*/

#include <bits/stdc++.h>
using namespace std;

int *fun(void)
{
    int *a = new int;

    *a = 10;

    cout << a << endl; // new int er address

    return a;
}

int main()
{
    int *p = fun();

    cout << p << endl // new int er address
         << *p << endl;

    return 0;
}