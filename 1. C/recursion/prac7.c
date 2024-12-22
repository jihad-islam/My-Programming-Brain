// ekta array dewa thakbe. oth index soho even index gular value reverse e print kora lagbe.

#include <stdio.h>

void fun(int *a, int n)
{
    if (n < 0) // ekhane n==0 or n<=0 dile 0th index e gele return kore dibe. it means 0th index er value print korbe na.
        return;

    if (n % 2 == 0)
    {
        printf("%d ", a[n]);
    }

    fun(a, n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    fun(a, n - 1);

    return 0;
}