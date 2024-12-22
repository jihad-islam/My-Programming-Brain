/*
   1. 0-9 digit koybar ase eta bere korar frequency array. code khubi simple. eitar basic bojhatai main. khatay details kora ase.

   2. ei code e only 0 the 9 porjonto cont korbe. 10,11,12,.... koyta ase ta count korbe na. jodi array element dewa thake tahole maximum element porjonto
      loop nile 10,11,12,... print kore dibe. and counting array taw maximum value porjonto nibo.

   3. but ami jodi array element aage thekei na jani tahole 3 ta step e solve korbo.
        step 1: find maximum number
        step 2: counting array er size hobe: count[maximum number +1] nibo.
        step 3: baki code same logic e korbo.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n); // array size input nilam

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int count[10] = {0}; // array er maximum value(not array size) tai counting array er size.

    // main code start.

    for (int i = 0; i < n; i++) // loop array size porjonto chalabo
        count[a[i]]++;

    for (int i; i < 10; i++) // print korbe count array size porjonto
        printf("%d - %d\n", i, count[i]);

    return 0;
}

// c++

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll size = 1e5 + 5;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll count[size];
    memset(count, 0, sizeof(count));

    for (int i = 0; i < n; i++) // ekhane keno main array er size porjonto loop chalaite hobe?
        count[arr[i]]++;

    for (int i = 0; i < size; i++)
        // if (count[arr[i]] != 0) // keno evabe noy?
        if (count[i] != 0)
            cout << i << "-" << count[i] << endl;

    return 0;
}
