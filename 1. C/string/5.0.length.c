#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", a); // scanf null count kore na
    // fgets(a, 20, stdin); // ekhane input null soho nibe. ami 'jihad' dile null soho 6 ta character nibe. but array length 5.

    int count = 0;

    // using while loop,for loop diyew kora jay.
    int i = 0; // fgets() diye string input nile hoy i=1 or count =1 dite hobe
    while (a[i] != '\0')
    {
        count++;
        i++;
    }

    printf("%d", count);

    return 0;
}

/*
    1. length ber korar basic eta. strlen(a) diyew length ber kora jay. strlen(a) puro string er length ber kore.
       bet jodi condition dey jemon: ',' pawa porjonto length ber koro tokhon basic use kore kora lagbe
*/