/*
    1. heap ekta array jeta complete binary tree er upor base kore ase. and max heap e root ta children theke boro hobe.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10};

    int x;
    cin >> x;

    v.push_back(x);

    int cur_idx = v.size() - 1;
    int parent_idx = (cur_idx - 1) / 2;

    cout << cur_idx << endl
         << parent_idx << endl;
    cout << "hello jihad" << endl;

    return 0;
}
