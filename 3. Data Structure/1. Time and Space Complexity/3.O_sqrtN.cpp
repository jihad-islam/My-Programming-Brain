#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // i <= sqrt(n)
    for (int i = 1; i <= sqrt(n); i++) // O(sqrt(N))
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (n / i != i)
                cout << n / i << endl;
        }
    }

    // i*i <= n
    for (int i = 1; i * i <= n; i++) // O(sqrt(N))
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (n / i != i)
                cout << n / i << endl;
        }
    }

    return 0;
}