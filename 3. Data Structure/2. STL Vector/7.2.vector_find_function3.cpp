#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 2, 4, 3, 5, 1, 2, 4, 5, 3, 2};

    auto it = find(v.begin(), v.end(), 100); // iteretor er short form auto.

    if (it == v.end()) // concept clear thakle ei condition bujhe jabo
        cout << "Not found";
    else
        cout << "Found";

    return 0;
}