/*
    1. amake given value stack er bottom e insert korte hobe.

    2. so given stack re onno ekta stack e  copy kore push korlei hobe. then new stack re abar given stack e copy korlei puran stack er bottom e push hoye jabe.
*/

#include <bits/stdc++.h>
stack<int> pushAtBottom(stack<int> &st, int x) // amake ekta stack and ekta value dise.
{
    // Write your code here.
    stack<int> newSt;
    while (!st.empty())
    {
        newSt.push(st.top());
        st.pop();
    }
    newSt.push(x); // given value ta new stack e push kore dilam

    while (!newSt.empty())
    {
        st.push(newSt.top());
        newSt.pop();
    }

    return st;
}