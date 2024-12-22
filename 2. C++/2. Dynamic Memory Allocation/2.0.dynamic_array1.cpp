#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n]; // dynamic array declaration.

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}

/*
    1. int *a = new int[n]; dynamic array declare korar syntax eta.
        i. int *a holo static pointer variable
        ii. new int[n] holo dynamic array

    2. ekhane dynamic array ta kintu just first element er address ta pointer variable a er kache ditese.
       r pointer diye array er baki element access kora jay. eta agei jana ase.
*/