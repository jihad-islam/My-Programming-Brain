#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> L = {10, 20, 30, 40, 50};

    cout << L.front() << endl; // head access korbe

    cout << L.back() << endl; // tail access korbe

    cout << *next(L.begin(), 3) << endl; // head and tail baade jekono value access. next jehetu iterator chalay tai value dekhar jonne dereferance korte hoy.

    return 0;
}