#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    cout << v[v.size() - 1];
    cout << v.back(); // duitai vector er last element access kore. but eta preferable cause likhte time kom lage

    cout << v[0]; // duitai vector er first element access kore. but this one is preferable
    cout << v.front();

    vector<int>::iterator it; // vector er iterator declare but auto use korbo
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}