#include <bits/stdc++.h>
using namespace std;
int main()
{
    // amra dynamic and static both array te ekta array theke onno ekta array te element copy kora shikchi. vector dynamic array er cls. so ekta vector theke arekta vector e element copy kora jabe.

    vector<int> v1(5, 100); // v1 vector er index shongkha 5 and protita index e 100 ase.
    vector<int> v2(v1);     // v1 vector ke v2 vector e copy korlam

    cout << v2.size() << endl; // v2 vector er size and element print korlam
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl
         << endl;

    // ekta vector theke arekta vector e element copy kora dekhlam. ekhn ekta array theke vector e element copy kora dekhbo

    int a[6] = {1, 2, 3, 4, 5, 6};
    vector<int> v3(a, a + 6); // array theke vector e element copy korar syntax eta. parentheses er moddhe sort function er moto starting pointer and end pointer likhte hoy.

    cout << v3.size() << endl;
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;

    // vector<int> v = {2, 10, 3};

    return 0;
}