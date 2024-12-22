// user theke input newa number er digit print kora lagbe

#include <stdio.h>

void fun(int n)
{
    if (n == 0)
        return;

    int result = n % 10;

    fun(n / 10);
    printf("%d ", result); // printf fun() er aage dile ulta print korbe
}

int main()
{
    int x;
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        int n;
        scanf("%d", &n);

        fun(n);

        if (n == 0) // condition e bolsilo 0 input dile 0 kew print kora lagbe. recursion e 0 holo base case tai main function e print kore dilam.
        {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}

/*
    note: recursion use kore 1to5 or 5to1 shobi print kora jabe. kheyal rakhte hobe ami recursion call ta kokhon kortesi.
*/