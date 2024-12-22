#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> id;

    id["jihad"] = 1;
    id["shakil"] = 2;
    id["sakib"] = 3;

    for(auto u:id) cout << u.first << " " << u.second << endl;
}