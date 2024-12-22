/*
    1. ekhane just bujhte hobe je, ekhane 1 ta variable and 2 ta pointer dewa ase.  user define function er pointer er value change korle kivabe variable er value ta change hoye jacche.

    2. so learning holo. ami jodi user define function theke main function er kono variable er value change korte chai tahole main function theke oi variable er address ke pass korbo then U.D.F. te ekta pointer use kore oi address ke recieve korbo and then oi pointer variable ke dereference korlei main function er variable er value ow change hoye jabe.
*/

#include <bits/stdc++.h>
using namespace std;

void fun(int *p) // another pointer
{
    *p = 20;
    // p = 20; // p holo ekta pointer variable. ami pointer variable er moddhe kono value assign korte parbo na.
    // p = NULL; // NULL ta address hishebe kaj kortese tai NULL assign kora jay.
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
