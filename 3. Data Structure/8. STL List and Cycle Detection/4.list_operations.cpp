#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> L = {20, 40, 30, 10, 50, 10, 10};

    L.remove(10); // list e jotogulo 10 ase shobgulare remove korbe.

    L.sort(); // ascending order e sort korbe

    L.sort(greater<int>()); // descending order e sord korbe

    L.unique(); // duplicate value remove korbe. complexity O(n). but jhamela hocche list ta sorted thakte hobe. ekhn sorted nai then amake aage sort kore nite hobe then ei function use korle complexity hobe O(nlogn).

    L.reverse(); // linked list reverse kore dibe. O(n).

    for (int val : L)
    {
        cout << val << endl;
    }
    return 0;
}