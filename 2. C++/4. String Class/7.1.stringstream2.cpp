// word count

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    stringstream a(s);
    // a << s;

    string w;

    int cnt = 0;
    while (a >> w)
    {
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}