// basic of begin and end pointer

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    cout << s.begin() << endl; // s.begin() eta ekta pointer. amra jani  pointer ke print korle tar address dekhabe. but eta private pointer eta amake tar address dekhabe na. print korle error dekhabe. tai always dereference kore use kora lagbe. r eitar address diye kaj ow nai kono.

    cout << *s.begin() << endl; // ei pointer ta ekta string er first character er address ke dereferance kore. tai ei function use korle kono string er first character pabo.

    cout << *s.end() << endl; // s.end() pointer use korle kono string er last character pabe. last character holo null. onek built in functor ase last character er aag porjonto kaj kore tokhon ei function amar lagbe.

    cout << *(s.end() - 1) << endl; // null er ager character paite 1 biyog korsi.

    return 0;
}