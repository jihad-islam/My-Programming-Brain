#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cin.ignore(); // enter ta ignore kore felbe. getchar() ow use kora jabe.

    string s;
    getline(cin, s); // eta string er pore enter input ney na. but aage enter input ney

    // cin.getline(s, 100); // evabe space soho input nitam character array er jonne.

    cout << x << endl;
    cout << s << endl;
    return 0;
}