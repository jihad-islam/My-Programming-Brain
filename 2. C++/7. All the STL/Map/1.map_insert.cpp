/*
    1. map e duita value rakha jay and value duita pair hishebe rakhte hoy. first value ta index hishebe kaj kore. map e value always aschending order e sorted thake.

    2. kokhon map use korbo? array or vector er maximum size 10^6 hoite pare. er beshi size nite hoile map use korte hoy. abar array te negetive index nai. amar jodi negative index er kichu proyojon hoy tokhono array or vector e complexity O(1) but map e complexity O(logn). loop use korle array or vector e complexity O(n) but map e complexity O(nlogn).map use korte hobe.

    3. map can be sorted or unsorted. sorted map works like set and unsorted map works like hash table.

    4. array or vector e complexity O(1) but map e complexity O(logn). loop use korle array or vector e complexity O(n) but map e complexity O(nlogn).
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<long long> v = {1, 12342341232314334, 4, 7, 12342341232314334}; // i cant count this frequency in array or vector because the size of array or vector index cant be long long.

    map<long long, int> cnt;

    for(auto u:v) cnt[u]++;

    for(auto u:cnt) cout << u.first << " " << u.second << endl;
    
    return 0;
}


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


// map user input
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> id;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        id[s] = x;
    }

    for(auto u:id) cout << u.first << " " << u.second << endl;
}