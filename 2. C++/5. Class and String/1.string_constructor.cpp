/*
    1. string holo ekta class. r protita class eri built in constructor thake.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1
    string a = "hello world"; // eta normal string input
    cout << a << endl
         << endl;

    // 2
    string b("hello world"); // eta constructor er maddhome input
    cout << b << endl
         << endl;

    // 3
    string c("hello world", 7); // 7 no index er aag porjonto character print korbe. space is also a character
    cout << c << endl
         << endl;

    // 4
    string d = "hello world"; // 'd' string e ekta value assign korlam
    string p(d, 4);           // then 'p' nam e new arekta string declare kore parenthesis er  moddhe 'd' sting and index no dilam. 'p' string ta 4 no index er por theke print korbe

    cout << p << endl
         << endl;

    // 5
    string e(26, 'A'); // amake 26 ta 'A' print kore dibe. eta use kore ja iccha print korte parbo
    cout << e << endl;

    return 0;
}