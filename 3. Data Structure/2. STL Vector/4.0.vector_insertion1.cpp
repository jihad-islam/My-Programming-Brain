/*
    1. vector er pointer: vector<int> v = {1,2,3,4,5}; ekhane first index v[0] holo  : v.begin() + 0
                                                              second index v[1] holo : v.begin() + 1
                                                              third index v[2] holo  : v.begin() + 2

    2. string er insertion e index dilei hoito but vector er insertion e amake pointer or adress dite hobe
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    v.insert(v.begin() + 2, 10); // v.insert() funtion e paranthesis er moddhe jei index e insert korte chaitesi oi index er pointer dite hoy and jei value ta insert korte chaitesi oi value ta dite hoy

    for (int x : v) // eita ranged based for loop. eta just value dibe. index lagle normal for loop chalabo
    {
        cout << x << " ";
    }
    return 0;
}