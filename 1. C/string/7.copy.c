#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];

    scanf("%s %s", a, b);

    // main code
    for (int i = 0; i <= strlen(a); i++)
    {
        a[i] = b[i];
    }

    // library function
    strcpy(a, b);

    printf("%s %s", a, b);

    return 0;
}

/*
    1. concatenation:  input:  jihad islam
                       output: jihadislam islam

    2. copy:  input:  jihad islam
              output: islam islam

    3. library function diye kora jay. but fixed index porjonto copy korte bolle basic lagbe.
*/