// input with declarition size

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end()); // ascending
    sort(v.begin(), v.end(), greater<int>());

    for (int val : v)
        cout << val << " ";

    return 0;
}

// input without declaration size

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    int n;
    cin >> n;

    while (n--) // vector er size declare na korei user er iccha moto value vector e input nitesi
    {
        int x;
        cin >> x;
        v.push_back(x); // push_back() function use korte hoile vector er size declare kora jabe na
    }

    v.pop_back();

    return 0;
}
