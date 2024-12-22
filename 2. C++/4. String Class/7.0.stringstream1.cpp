// stream means group. amra sentence theke word ber korbo.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s); // stringstream class. 'ss' hocche object. then bracket e 'ss' variable e constructor er niyome string ta input nilam.

    string w; // notun arekta string nilam jar nam 'w'. 'w' er moddhe word rakhbo

    while (ss >> w) // 'ss' er moddhe string ta ase. ekhn 'ss' er moddhe jei string ta ase oi string theke word by word 'w' variable ke dibo.
    {
        cout << w << endl;
    }

    return 0;

    // stringstream ss;
    // ss << s; // evabew stringstream er moddhe input newa jay
}