#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    char a[n];
    scanf("%s", a);

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += (a[i] - '0');
    }

    printf("%d", sum);

    return 0;
}

/*
    1. amake array size diye dibe. ami array size er soman value input nibo, but kono space nite parbo na. then value gular summation print korbo.
        input:  5
                12345
        output: 15

    2. eita onek interesting ekta problem. integer value jokhon input nei tokhon space soho nei. question e amake int array er kotha bolse. but integer value without space input newa jay na. qestion e actually string ke bujhaise. ei tricks ta dhora lagbe shurute. ami jehetu digit character hisebe input nitesi, jokhon 0 input nibo computer 0 er ascii value ke input nitese.

        so, 0 = 48;  48-48=0
            1 = 49;  49-48=1
            2 = 50;  50-48=2.......

    3. so jekono character ke digit e convert korar niyom-
            i.   small letter -'a';
            ii.  capital letter - 'A';
            iii. digit - '0';
*/