// O(NlogN). ei code bujhi nai.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) // O(N). inner loop and outer loop mile O(Nlog(N))
    {
        int x = i;

        while (x > 0) // O(logN)
        {
            int digit = x % 10;
            cout << digit << " ";
            x /= 10;
        }

        cout << endl;
    }
    return 0;
}