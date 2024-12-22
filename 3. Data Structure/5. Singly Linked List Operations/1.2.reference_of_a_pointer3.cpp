/*
    1. UDF e reference er maddhome pointer accept korle. main function er pointer and UDF er pointer same pointer kei point kore. duita alada alada pointer hoye jay na.
*/

#include <bits/stdc++.h>
using namespace std;

void fun(int *&p) //  ami pointer er address receive korsi. eke reference of a pointer bole.
{
    p = NULL;
    // cout << &p << endl;
}

int main()
{
    int val = 10;
    int *ptr = &val;

    fun(ptr);

    cout << ptr << endl;
    cout << &val << endl;

    return 0;
}