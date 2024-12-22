/*
    1. duita matrix er sum print kora lagbe
    2. row and column same na thakle duita matrix er summation ber kora jay na
    3. duita matrix er multiplication ber korte hole 
*/

#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int a[m][n], b[m][n], c[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}