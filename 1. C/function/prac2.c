#include <stdio.h>

int fun(int a)
{
    if (a >= 0)
    {
        return a;
    }

    else if (a < 0)
    {
        return (a * -1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int result = fun(n);

    printf("%d", result);
    return 0;
}

/*
    absolute value print korte hobe without using library function.
*/