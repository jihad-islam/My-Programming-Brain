// factorial

#include <stdio.h>

long long int fact(int n)
{
    if (n == 0)
        return 1;

    return n * fact(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    long long int result = fact(n);

    printf("%lld", result);

    return 0;
}