#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m); // n=row, m=column
    int a[n][m];
    int element = n * m;

    for (int i = 0; i < n; i++) // array input nilam
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int count = 0;

    if (n != m) // eta square matrix kina eita first e check korbo
    {
        count = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j) // diagonal ashle continue korbo
            {
                continue;
            }

            if (a[i][j] != 0) // diagonal ke skip kora hoise, daigonal baade jekono elemnt non zero hole count++ korbo and loop theke ber hoye jabo.
            {
                count = 1;
                break;
            }
        }
    }

    if (count == 0)
    {
        printf("Primary Diagonal Matrix\n");
    }

    else
    {
        printf("Not Primary Diagonal Matrix\n");
    }

    return 0;
}