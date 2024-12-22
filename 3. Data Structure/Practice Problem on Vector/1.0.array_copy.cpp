// array copy using vector

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v1(n);
    vector<int> v2(n);

    for (int i = 0; i < n; i++)
        cin >> v1[i];
    for (int i = 0; i < n; i++)
        cin >> v2[i];

    vector<int> ans;
    ans.insert(ans.end(), v2.begin(), v2.end()); // ans.end() ekhan theke na shuru korle hobe? alternative ase?
    ans.insert(ans.end(), v1.begin(), v1.end());

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}
