#include <bits/stdc++.h>
using namespace std;

void fun(stringstream &ss) // must & dewa lagbe. karon address receive kortesi
{
    string w; // new ekta string declare korlam

    if (ss >> w) // etai mainly base case. 'ss' variable protibar check korbe tar vitor word ase kina. word thakle 'w' ke diye dibe. na thakle terminate hoye jabe.
    {
        cout << w << endl; // 'w' er moddhe ekta word ase ami oita print kore disi. then function call korbo bakigulo print korar jonne

        fun(ss); // recursive function call korlam. function aage call kore then print korle reverse word print hobe.
    }
}

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s); // word print korar jonne stringstream class nilam

    fun(ss); // function call korlam

    return 0;
}