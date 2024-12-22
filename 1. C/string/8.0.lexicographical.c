/*
    1. lexicographical holo 2 ta string er moddhe konta choto or boro or equal eita compare kora.
    2. ei code e 2 ta if else er ladder use kora hoise. chaile ekta ladder use korew kora jabe. tokhon multiple else if use korte hobe.
    3. ei puro jinish ta library function use korew kora jay.

    4. lexicographical character by character compare kore. shurutei size ashe na, duita string er characters same hole then size diye compare kore.

        example:
                        apple < apply ; karon e choto y theke
                        apple < applicant; abaro e choto i theke

                        abcd > abc; compare korte korte sesh hoye gese and same characters emon hole je sesh hoise she choto
                        abd < abde;

                        abd = abd; character and size both same

                        axy < ebc; shurtei a choto e er theke tai r baki gulo compare korbe na.
                        zo > jihad;
*/

#include <stdio.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    int i = 0;

    while (1)
    {
        // first ladder
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Equal\n");
            break;
        }

        else if (a[i] == '\0')
        {
            printf("A choto\n");
            break;
        }

        else if (b[i] == '\0')
        {
            printf("B choto\n");
            break;
        }

        // second ladder
        if (a[i] == b[i])
        {
            i++; // ekmatro increment e break use kora hoy nai. kheyal rakhte hobe.
        }

        else if (a[i] < b[i])
        {
            printf("A choto\n");
            break;
        }

        else
        {
            printf("B choto\n");
            break;
        }
    }

    return 0;
}
