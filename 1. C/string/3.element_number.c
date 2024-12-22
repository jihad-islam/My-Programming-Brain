#include <stdio.h>
int main()
{
    int a[] = {10, 20, 30, 40, 50}; // 5 ta element nisi, but size declare kori nai. number of element nije ber korbo.

    int result = sizeof(a) / sizeof(a[0]);

    printf("%d\n", result);

    return 0;
}

/*
    no of element = size of whole array \ size of one element of that array
*/