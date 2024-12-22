// user theke number input nibo digit print kora lagbe

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    while (n != 0)
    {
        int result = n % 10;
        printf("%d ", result);

        n /= 10;
    }

    return 0;
}