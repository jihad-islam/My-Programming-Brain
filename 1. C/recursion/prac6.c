/*
    input newa number reverse e print kora lagbe. but last digit e space rakha jabe na. tai main function e 1 print kore disi.
*/

#include <stdio.h>

void fun(int n)
{
    if (n == 1)
        return;

    printf("%d ", n);
    fun(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    fun(n);

    printf("1");

    return 0;
}