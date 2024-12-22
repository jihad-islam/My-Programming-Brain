// iterator namespace

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // string ::iterator a;
    for (string ::iterator a = s.begin(); a < s.end(); a++) // namespace upore na likhe loop er condition er moddhew likha jay
    {
        cout << *a << endl;
    }

    return 0;
}