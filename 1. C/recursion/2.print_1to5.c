#include <stdio.h>

void fun(int i, int n)
{
    if (i == n + 1) // base case
        return;

    printf("%d\n", i);
    fun(i + 1, n); // recursive call
}

int main()
{
    int n;
    scanf("%d", &n);
    fun(1, n); // function call

    return 0;
}