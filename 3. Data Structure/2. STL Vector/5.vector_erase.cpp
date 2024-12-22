#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // erasing single index
    v.erase(v.begin() + 3); // 4 no index ta delete or erase korbo

    // erasing multiple(range) index
    v.erase(v.begin() + 1, v.end() - 1); // ekhane multiple index delete korbo. starting index and jei index porjonto erase korbo tar immidiate porer index dibo

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}