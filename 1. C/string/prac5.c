#include <stdio.h>
#include <string.h>
int main()
{
    char a[100001];
    fgets(a, sizeof(a), stdin); // fgets e always sizeof(a) use korbo
    // scanf("%s", a);

    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - 32;
        }

        else if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] + 32;
        }

        else if (a[i] == ',')
        {
            a[i] = ' '; // ',' hole space nite bolse. ami '\0' null nile string input newa off kore dibe. so space ei newa lagbe
        }
    }

    printf("%s", a);

    return 0;
}

/*
    input:  jihad,ISLAM
    output: JIHAD islam

    eita solve korar shomoy 2 ta problem face korsi.
    1. jehetu input e kono space nai so scanf diyew korte parbo. scanf ',' nite pare, just space nite pare na.
    2. fgets(a, sizeof(a), stdin);
       fgets(a, strlen(a), stdin);
       eikhane ei duitar moddhe always sizeof(a) use korbo. vulew strlen(a) use korbo na.  karon a[5] declare kora ami 10 character er ekta string nitei pari. tokhon strlen(a) use korle buffer overflow hoye jabe.
*/