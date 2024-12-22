// replace and find function

#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> L = {10, 20, 30, 40, 30, 30, 70};

    // replace any node
    replace(L.begin(), L.end(), 30, 100); // list er purota loop ghurbe then jei jaygay 30 pabe taake 100 diye replace korbe. eta list er function na. jekono STL ei use korajabe.

    for (int val : L)
    {
        cout << val << endl;
    }
    cout << endl;

    // find any node
    auto it = find(L.begin(), L.end(), 60);
    if (it == L.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found";
    }
    return 0;
}