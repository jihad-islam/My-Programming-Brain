/*
    1. iterator ekta object jeta container er moto kaj kore. iterator kono namespace na.C++ e iterator traverse korte use kora hoy. traverse means protita eliment ke access kora.

    2. iterator behaves like a pointer but iterator more than a pointer. karon iterator address er maddhome traverse kore. pointer just address store kore. but iterator address store kore, sathe traverse ow kore.

    3. traverse er jonne iterator use kora hoy.
    4. traverse er jonne begin() and end() function use kora hoy iterator e.

    5. VVI: begin() and end() ei duita function iterator chara use kora jabe na.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string ::iterator a; // eta string er namespace. syntax ta mukhosto. iterator holo ekta pointer. and 'a' holo iterator pointer er variable.

    for (a = s.begin(); a < s.end(); a++) // 'a' ke shurur index theke last index er aag porjonto loop chalabo or iterate korbo
    {
        cout << *a << endl; // jehetu 'a' pointer variable tai er moddhe address store thakbe. amar to r address er dorkar nai. amar lagbe value. ami 'a' ke print korte parbo na. karon 'a' holo private pointer variable. normal pointer varible hole address dekhaito. but ami value chai tai dereferance korsi.
    }

    return 0;
}