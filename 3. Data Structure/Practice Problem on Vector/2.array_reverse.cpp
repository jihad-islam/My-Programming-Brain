// vector and reverse function use kora hoise. basic reversing holo two pointers technique.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n); // ekhane third bracket hobe na. eta vul korsi. vector notun kore array declare kora lage na. vector nijei ekta array.

    for (int i = 0; i < n; i++)
        cin >> a[i];

    reverse(a.begin(), a.end()); // begin() and end() function iterator chara use kora jay na. reverse e jehetu use korsi that means revers function iterator use kore. not only reverse, maximum function ei iterator use kore.

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
