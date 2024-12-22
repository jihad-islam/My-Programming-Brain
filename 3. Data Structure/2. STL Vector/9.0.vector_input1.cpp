// vector input without size declaration

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v; // vector declaration

    int n; // size input
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x; // ami jei value gula input nibo oigula x variable e thakbe

        v.push_back(x); // then push back kore ami x ke or value ke vector e rakhbo

        // evabe korar reason holo vector e aage theke index thake na. amake manually index toiri kore nite hobe.
    }

    for (int val : v) // ranged based for loop
    {
        cout << val << " ";
    }

    return 0;
}