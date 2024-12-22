#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define _test    int _TEST; cin >> _TEST; while (_TEST--)
int cnt[1000000]; // global variable is initialized to 0
int main()
{
    vector<int> v = {2,2,3,4,2};

    for (auto u:v) cnt[u]++;

    for (int i = 0; i < 1000000; i++)
    {
        if (cnt[i] > 0)
        {
            cout << i << " " << cnt[i] << endl;
        }
    }

    return 0;
}
