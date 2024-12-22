#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // ascending
    sort(a, a + n); // a means a[0] and a+n means a[0+n]

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    // descending.
    sort(a, a + n, greater<int>()); // descending likhar syntax eita. greater likhe angle bracket er moddhe datatype likhbo then parenthesis dibo. eta mainly ekta function.
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

/*
    1. ekhane jei built in sort function use kora hoise, eta best time complexity use kore. etar time complexity holo NlogN.

    2. basic: i. a[100] array er a[0] er adress and 'a' er address same.
              ii. ami jodi array er 5th index or a[4] e jete chai. tahole array a[0+4] evabe jabe.
              iii. ekhn ami a[4] er address jante chai. eta evabe likha hoy: a+4

    3. for ascending:  sort(a, a + n);
       ekhane parenthesis er moddhe -   i. prothome first element er address dewa lagbe. first element holo a[0].
                                           a[0] er adddress and a er address same.
                                        ii. second e joto tomo index porjonto sort korte chai tar porer index dite hobe.
                                            ami jodi prothom 3 ta elemnt sort korte chai tahole: sort(a, a+3); likhbo.
                                            karon prothom 3 tar index holo: a[0],a[1],a[2].
*/