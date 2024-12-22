/*
    1. aager code e duita function ei dynamic variable er address print korechi.
    2. ei code e duita function ei pointer variable er adress print korbo
    3. duita function e pointer variable er address same pabo na. actually main function e pointer variable er kono address ei pabo na. karon pointer varible static memory howay function return er pore delete hoye jabe.
    4. code ta terminal e warning dekhabe karon pointer variable er adress delete hoye jabe.

    5. eita main code na. tobe double pointer er basic ta kaje lagbe.
*/

#include <bits/stdc++.h>
using namespace std;

int **fun(void)
{
    int *a = new int;

    *a = 10;

    cout << "fun function: " << &a << endl; // pointer variable er address

    return &a;
}

int main()
{
    int **p = fun();

    cout << "main function: " << p << endl; // pointer variable er address

    return 0;
}