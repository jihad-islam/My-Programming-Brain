/*
    ekta array input nibo. oi array te koyta even and koyta odd ta print korbo.
    but there will be no return type and no argument pass.
*/

#include <stdio.h>

void odd_even(void)
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &*(arr + i));
    }

    int p = 0, q = 0;

    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            p++;
        }

        else
        {
            q++;
        }
    }

    printf("%d %d", p, q);
}

int main()
{
    odd_even();

    return 0;
}