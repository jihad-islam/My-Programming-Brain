/*
    1. UDF e pointer er value(variable er address change) change korsi. main function er pointer er kichui change hoy nai.
*/

#include <bits/stdc++.h>
using namespace std;

void fun(int *p) // another pointer
{
    *p = 20;
    // p = NULL; // NULL ta address hishebe kaj kortese tai NULL assign kora jay.
    // *p = 30;  // segmentation fault khabo karon NULL ke dereference korte chaitesi.
}

int main()
{
    int val = 10;
    int *ptr = &val; // pointer

    fun(ptr);

    cout << val << endl;
    cout << *ptr << endl;

    return 0;
}
