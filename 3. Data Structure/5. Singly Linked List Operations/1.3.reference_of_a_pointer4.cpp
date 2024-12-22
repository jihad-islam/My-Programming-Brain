/*
    1. main kotha ami jodi main function er pointer ke user define function e update krote chai then amake reference of a pointer er logic use korte hobe.
*/

#include <bits/stdc++.h>
using namespace std;

void fun(int *&ptr) // syntax of reference of a pointer.
{
    *ptr = 5000; // main function er ptr and ei ptr same.
}

void fun(int *ptr)
{
    *ptr = 5000; // uporer ptr and ei ptr same kaj korbe but difference tokhoni dekhbo jokhon ami address niye kaj korbo. ami ei ptr er address change korle just ei function er moddhei change hobe. but uporer ptr er address niye kaj korle sheta main function er pointer er niye kaj kora hobe.
}

// main function
int main()
{
    int val = 10;
    int *ptr = &val;

    fun(ptr);

    cout << *ptr << endl;
    cout << &val << endl;

    return 0;
}