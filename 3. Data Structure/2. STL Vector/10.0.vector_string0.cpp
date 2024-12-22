// string input without space using vector

/*
    1. vector string means array of string. mane onek gula string jodi input nite chai tokhon array hishebe input nibo.
    2. 2D array use korew multiple string input newa jay but bishoy ta onek complex hoye jabe. vector use kore multiple string input newa ta easy.

    3. string without space: jotokhon new line na pabe totokhon string input nite thakbe. and space paile ekta string hishebe count hobe. jemon: mohammad jihad islam, ekhane 3 ta string conunt hobe.

    4. string with space: new line na pawa porjonto ekta string hishebe count hobe. jemon: jihad islam
                                                                                           sakib khan;  ekhane duita string count hobe.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> v; // angle bracket e <string> likha ase, karon ami string input nibo. ekhane size initialize kori nai. so loop er moddhe push_back() function use kore size initialize kora lagbe.

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s; // ekhane string input nitese without space. so ekhane space dile string hishebe count hobe.
        v.push_back(s);
    }

    // vector er normal loop
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    // ranged based for loop
    // for (string val : v)
    // {
    //     cout << val << endl;
    // }

    return 0;
}