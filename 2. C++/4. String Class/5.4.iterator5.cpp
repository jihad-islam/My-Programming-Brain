// iterator object

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    for (auto i = s.begin(); i < s.end(); i++) // auto hocche ekta sytax jeta automatically detect korbe je 'i' hocche iterator er variable. so just auto likhlei hobe. r kichu likha lagbe na. but eta c++ 14 er porer version gulo accept korbe.
    {
        cout << *i << " ";
        // cout << i[] << endl;
    }

    return 0;
}