#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d", &x);

    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum = a[i] + a[j];

            if (sum == x)
            {
                count++;
                break;
            }
        }
    }

    if (count != 0)
    {
        printf("Yes\n");
    }

    else
    {
        printf("No\n");
    }

    return 0;
}