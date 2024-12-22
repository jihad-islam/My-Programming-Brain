#include <stdio.h>
int main()
{
    char a[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}

/*
    ami input e 'j i h a d' dile oputput dibe j i h. karon space ow character hisebe count hoy.
    amake input dewa lagbe jihad. tahole output e jihad pabo.
*/