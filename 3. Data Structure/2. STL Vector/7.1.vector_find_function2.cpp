// find function jodi value khuje na pay, what it will be return?

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 2, 4, 3, 5, 1, 2, 4, 5, 3, 5796};

    vector<int>::iterator it;
    it = find(v.begin(), v.end(), 100); // find function v.end() porjonto jabe. and v.end() holo vector array jekhane sesh hoice orthat 5796 er immidiate next index ke point kore. and v.end() actually emon ekta index ke point kortese jeitar kono existance nai. so, find() function emon ekta index porjonto jaitese jar existance nai. tai amake garbage value or ultapalta value return korbo.

    cout << *it; // this will return a garbage value

    return 0;
}