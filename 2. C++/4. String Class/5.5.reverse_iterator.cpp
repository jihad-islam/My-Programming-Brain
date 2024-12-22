// reverse iterator

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    cin >> s;

    for (auto a = s.rbegin(); a < s.rend(); a++)
    {
        cout << *a << " ";
    }

    return 0;
}