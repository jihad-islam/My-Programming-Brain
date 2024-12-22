/*
    1. binary search er TC = O(logN)
    2. linear search e loop chalaya protita element khoja hoy. tai linear search er TC holo O(N). and binary search e protibar ordhek element baad jay tai binary search er TC holo O(logN)
    3. binary means 2. protibar main array ke 2 vag kora hoy tai eke binary search bole.
    4. binary search e array must be sorted hote hobe. linear search e sorted na  holew chole.

    5. eta classic binary search er code. that means sorted array ei input nibo. amar sort korar dorkar nai.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) // O(N)
        cin >> a[i];

    int search_item;
    cin >> search_item;

    int left = 0;
    int right = n - 1; // array er last index holo n-1

    bool flag = false; // ekhane boolean use kora hoise. chaile flag = 0 dewa jeto. but boolean to shekha lagbe. tai na?

    while (left <= right) // O(logN).  equal dite hobe.
    {
        int mid_index = (left + right) / 2;

        if (a[mid_index] == search_item) // shurutei mid index e value peye gele loop ekhanei break kore dibo
        {
            flag = true;
            break;
        }

        if (search_item > a[mid_index]) // right e jabo
            left = mid_index + 1;

        else // left e jabo
            right = mid_index - 1;
    }

    if (flag == true)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;

    return 0;
}