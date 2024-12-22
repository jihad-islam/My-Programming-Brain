/*
    1. eta prefic sum array er problem. but prothome bruteforce approch e solve korbo aage. bruteforce approch holo tc,sc bibechona na kore aage problem solve kora. then problem solve er por tc niye vabbo.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n];
    for (int i = 0; i < n; i++) // O(N)
        cin >> a[i];

    for (int i = 0; i < m; i++) // O(M) , so O(M*N)
    {
        int x, y;
        cin >> x >> y;

        long long sum = 0;
        for (int i = x - 1; i <= y - 1; i++) // O(N)
        {
            sum += a[i];
        }

        cout << sum << endl;
    }

    return 0;
}

/*
    1. so time complexity hoitese O(N) + O(M*N). O(M*N) boro howay tc hobe O(M*N)
    2. question e M,N duitari limit dewa ase 10^5. so steps will be 10^10 for O(M*N).
    3. question e time limit dewa chilo 1.5 second
    3. 10^7 steps for 1 second. 10^8 er jonne 10 sec, 10^9 er jonne 100 sec,  and 10^10 er jonne  1000 second time lagbe.
    4. question e time limit 1.5 sec dewa. so steps can be maximum 1.5 * 10^7.
*/