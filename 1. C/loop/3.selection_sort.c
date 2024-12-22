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

    // Ascending Order
    for (int i = 0; i < n - 1; i++) // ekhane n-1 newar reason hole last index ta emnitei sorted hoye jabe. shudhu shudhu last index porjonto jawar proyojon nai.
    {
        for (int j = i + 1; j < n; j++) // ei loop e j=1 dile vul jabe
        {
            if (a[i] > a[j]) // Descending Order e sajaite chaile condition hobe: a[i] < a[j].
            {
                int swap = a[i];
                a[i] = a[j];
                a[j] = swap;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}