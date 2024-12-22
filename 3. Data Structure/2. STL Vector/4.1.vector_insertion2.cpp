/*
    1. multiple value insert korar niyom
    2. ekta vector er moddhe arekta vector insert korar maddhome multiple value insert kora jay.
    3. jei vector ta insert korte chaitesi, oi vector er shurur pointer and ending pointer dite hobe.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> x = {100, 101, 102, 103};
    v.insert(v.begin() + 2, x.begin(), x.end()); // first e jei index e insert korte chai oi index, then new vector er starting index and then ending index

    for (int a : v)
    {
        cout << a << " ";
    }

    return 0;
}