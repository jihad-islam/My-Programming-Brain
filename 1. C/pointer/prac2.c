#include <stdio.h>
#include <limits.h>

void find(int *p, int n)
{
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (*(p + i) > max)
        {
            max = *(p + i);
        }

        if (*(p + i) < min)
        {
            min = *(p + i);
        }
    }

    printf("%d %d", min, max);
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &*(a + i));
    }

    int size = sizeof(a) / sizeof(*a);

    find(a, size);

    return 0;
}