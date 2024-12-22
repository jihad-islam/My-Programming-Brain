// v.begin() - vector er first index,    v.end() - vector er last index

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> x = {100, 101, 102, 103};

    // insertion
    v.insert(v.begin() + 2, 10);                 // position,value.
    v.insert(v.begin() + 2, x.begin(), x.end()); // x ke v te copy

    // deletion
    v.erase(v.begin() + 3);              // single index
    v.erase(v.begin() + 1, v.end() - 1); // index range

    for (int x : v)
        cout << x << " ";

    return 0;
}