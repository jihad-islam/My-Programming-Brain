// primary and secondary diagonal er summation er absolute difference ber korte bolse.

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int p = 0, q = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                p += a[i][j];
            }

            if (i + j == n - 1)
            {
                q += a[i][j];
            }
        }
    }

    int sum = p - q;

    if (sum < 0)
    {
        sum = sum * -1;
    }

    printf("%d", sum);

    return 0;
}