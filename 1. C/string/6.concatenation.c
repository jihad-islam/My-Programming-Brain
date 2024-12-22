#include <stdio.h>
#include <string.h>
int main()
{
    char a[200], b[100];

    scanf("%s %s", a, b);

    // basic code
    int j = strlen(a);
    for (int i = 0; i <= strlen(b); i++)
    {
        a[j] = b[i];
        j++;
    }

    // a[j] = '\0'; // jodi prothom 2 ta or 3 ta copy korte bole taile null boshay dibo and loop oi index porjonto chalabo.

    // library function
    strcat(a, b); // b er string a te copy korbe.

    printf("%s", a);

    return 0;
}

/*
    1. concatenation means copy kora. jekono ekta string er element onno ekta string e copy korbo.
    2. concatenation er library function ase. but logic build er jonne basic jante hobe.
    3. function puro string copy kore. but amake prothom 2 ta or 3 ta character copy korte bolle function korte parbe na. logic build kore copy korte hobe.
*/