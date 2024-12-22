// ekta sentence input nibo and ekta word input nibo. oi sentence e word ta kotobar ase count kore output dibo

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin, a);

    string b;
    cin >> b;

    stringstream ss(a);
    string w;
    int count = 0;

    while (ss >> w)
    {
        if (w == b)
            count++;
    }

    cout << count << endl;

    return 0;
}
