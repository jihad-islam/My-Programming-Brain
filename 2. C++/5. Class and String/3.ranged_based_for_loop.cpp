/*
    1. ranged based for loop normal array or character array er upor kaj kore na. c++ er specific kichu class er upor kaj kore. string tader moddhe ekta. string e ranged based for loop kaj kore.

    2. ranged based for loop er syntax: ami jehetu string er jonne ranged based for loop use kortesi and string er protita element holo character, tai for loop er moddhe char datatype er ekta variable declare korbo then colon(:) diye jei string ta input nisi oi string ta likhbo.

    string sesh howar aag porjonto ei loop cholbe and string er protita character 'char c' te jabe and then loop er moddhe c print kore dibo.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // basic
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) // evabe amra string er index pai. then index use kore value pai.
    {
        cout << s[i] << endl;
    }

    // ranged based for loop
    string a;
    cin >> a;

    for (char c : a) // etar maddhome amra just value ta pai, kono index pai na. string er protita value hocche character tai char likhsi. int hoile int likhtam
        cout << c << endl;

    return 0;
}