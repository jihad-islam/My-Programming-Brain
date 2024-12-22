#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // ekta integer value er digit print korbo

    while (n > 0) // O(logN)
    {
        int digit = n % 10;
        cout << digit << endl;
        n /= 10; // each time ami n ke 10 dara vag kortesi. so exponential vabe n er value komteche
    }

        int m;
    cin >> m;

    for (int i = 1; i <= m; i = i * 2) // O(logN)
    {
        cout << i << endl;
    }

    return 0;
}