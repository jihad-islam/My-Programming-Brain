/*
    1. vector holo STL er ekta class, jei class e dynamic array er template store kora ase.
    2. amra dynamic array te insertion, deletion, copy, etc operation shikhsi basic use kore. oi operation guloi vector diye shortcut e kora jabe.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(5);     // vector er size declare kore dilam
    vector<int> v3(5, 10); // protita index e value 10 rakhchi

    cout << v3.size() << endl;

    // for (int i = 0; i < v3.size(); i++)
    //     cout << v3[i] << " ";

    for (auto a : v3)
        cout << a << endl;

    return 0;
}