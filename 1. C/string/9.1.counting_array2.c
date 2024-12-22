#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = INT_MIN;

    for (int j = 0; j < n; j++) // main array er size porjonto loop chalaya main array er maximum element find  out korte hobe.
    {
        if (a[j] > max)
        {
            max = a[j];
        }
    }

    int count[max + 1]; // counting array er size always main array er maximum value theke 1 beshi hobe.

    for (int j = 0; j < max + 1; j++) // counting array er size porjonto loop chalaya protita element 0 korte hobe.
    {
        count[j] = 0;
    }

    for (int j = 0; j < n; j++) // ei loop ta sizeof(a) porjonto cholbe. but sizeof() use kora not recommended.
    {
        count[a[j]]++;
    }

    for (int j = 0; j < max + 1; j++) // ei loop ta sizeof(count) porjonto cholbe. but ekhane sizeof() function use kora recommended na.
    {
        if (count[j] != 0)
        {
            printf("%d - %d\n", j, count[j]);
        }
    }

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