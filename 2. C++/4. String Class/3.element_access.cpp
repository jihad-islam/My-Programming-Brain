#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Jihad_Islam";

    cout << s.front() << endl; // O(1) // access first element using function
    cout << s.back() << endl;  // O(1) // function use kore last index access. preferable

    cout << s[0] << endl;    // string er first element access. preferable
    cout << s.at(0) << endl; // access first element using function

    cout << s[s.size() - 1] << endl; // string er last element access. string ekta array tai third bracket use korse. string size theke 1 biyog korle last index pabo
    return 0;
}