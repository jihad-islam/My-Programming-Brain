// user define function e array input nisi, main function e print korsi.

#include <bits/stdc++.h>
using namespace std;

int *fun(int n)
{
    int *a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    return a; // a means a[0] er address return kortese. jehetu dynamic array tai return er porew address delete hobe na. r jehetu a[0] er address main function e jaitese. tai main function theke a[0] er address use kore puro function kei control kora jabe.
}

int main()
{
    int n;
    cin >> n;

    int *a = fun(n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    delete[] a; // eta dynamic array delete korar syntax. third bracket diye array bujacche. amar dynamic array niye kaj kora sesh tai delete kore dibo.

    return 0;
}