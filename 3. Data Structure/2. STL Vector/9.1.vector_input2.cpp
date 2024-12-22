// vector input with size declaration

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n); // evabe input nite chaile vector er size declare kore dite hobe.

    for (int i = 0; i < n; i++)
        cin >> v[i]; // ekhn v[i] diye array er moto kore input nite parbo

    for (int val : v) // ranged based for loop
        cout << val << " ";

    return 0;
}