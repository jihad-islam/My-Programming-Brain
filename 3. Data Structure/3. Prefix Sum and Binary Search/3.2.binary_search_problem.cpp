/*
    1. eta binary search er ekta problem. amake ekta array dibe and q dibe. q times amake digit dibe and check korte hobe oita ase kina. theke found print konbo na thakle not found print korbo. jemon:

                                input:  5 3
                                        1 5 4 3 2
                                        5
                                        3
                                        6

                                output: found
                                        found
                                        not found
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q; // q means querry. querry onekta test case er moto kaj kore

    int a[n];
    for (int i = 0; i < n; i++) // o(n)
        cin >> a[i];

    sort(a, a + n); // sort function. o(nlogn)

    while (q--) // o(q)  // ekhane q and n er size same taile tc o(n) hobe. vitore binary search er o(logn). so, total tc o(nlogn)
    {
        int x;
        cin >> x;
        bool flag = false;
        int l = 0, r = n - 1;

        // binary search
        while (l <= r) // o(logn)
        {
            int mid = (l + r) / 2;

            if (a[mid] == x)
            {
                flag = true;
                break;
            }

            if (x > a[mid])
                l = mid + 1;

            else
                r = mid - 1;
        }

        if (flag == true)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}