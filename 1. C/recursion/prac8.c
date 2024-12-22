// ekta array er element jog korte hobe.

#include <stdio.h>

long long sum(int *a, int n)
{
    if (n == 0) // ekhane n==0 hole return 0 korbe. so eta mone korar dorkar nai je 0th index er value jog kora hobe na. karon jokhon n==1 chilo tokhoni recursive function e n-1 e 0 hoye gese.
        return 0;

    long long add = a[n - 1] + sum(a, n - 1);
    return add;
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

    long long result = sum(a, n);

    printf("%lld", result);

    return 0;
}