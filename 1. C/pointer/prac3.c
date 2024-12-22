#include <stdio.h>
int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &*(a + i));
    }

    int p = *a, q = *(a + 1), r = *(a + 2);

    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (a[i] > a[j])
            {
                int swap = a[i];
                a[i] = a[j];
                a[j] = swap;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", *(a + i));
    }

    printf("\n%d\n%d\n%d", p, q, r);

    return 0;
}

/*
    1. jekono 3 ta number input nibo, then oita sorting kore print korbo and jevabe input nisi oivabew print korbo.
    2. sorting kore print korte pari. but sorting kore print korar por jevabe nisi oivabe print korar technique ta jene rakhte hobe.
*/