// frequency array ber korte main array er maximum value jana thaka lage. maximum value ta question er dewa thake, but jodi na dewa thake then evabe korte hobe.

#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int max = INT_MIN;

    for (int i = 0; i < n; i++) // main array er size porjonto loop chalaya main array er maximum element find  out korte hobe.
        if (a[i] > max)
            max = a[i];

    int count[max + 1]; // counting array er size always main array er maximum value theke 1 beshi hobe.

    for (int i = 0; i < max + 1; i++) // counting array er size porjonto loop chalaya protita element 0 korte hobe.
        count[i] = 0;

    for (int i = 0; i < n; i++) // ei loop ta main array er size porjonto cholbe.
        count[a[i]]++;

    for (int i = 0; i < max + 1; i++) // ei loop ta sizeof(count) porjonto cholbe. but ekhane sizeof() function use kora recommended na.
        if (count[i] != 0)
            printf("%d - %d\n", i, count[i]);

    return 0;
}

/*
    counting or frequency array solve korar procedure:
        1. main array input newa.
        2. main array er maximum element khuje ber kora.
        3. counting array declare kora. counting array er size main array er maximum
           value theke 1 beshi nite hobe.
        4. counting array er size jana na thakle loop chalaya protita element 0 kora.

        5. main array er size porjonto loop chalay element count kora.
        6. print korar array ta counting array er size porjonto loop chalaite hobe.
*/