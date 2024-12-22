// replace and find

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 2, 4, 3, 5, 1, 2, 4, 5, 3, 2};

    replace(v.begin(), v.end(), 2, 100); // loop range, find value, replace value

    auto it = find(v.begin(), v.end(), 100); // loop range, find value. vector er find function desire value khuje pele index er address return kore. tai iterator diye recieve korsi.

    for (int x : v)
        cout << x << " ";

    return 0;
}