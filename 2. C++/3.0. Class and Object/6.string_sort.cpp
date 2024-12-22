#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[100];

    cin.getline(a, 100);

    // ascending
    sort(a, a + strlen(a));
    cout << a << endl;

    // descending
    sort(a, a + strlen(a), greater<char>());
    cout << a << endl;

    return 0;
}