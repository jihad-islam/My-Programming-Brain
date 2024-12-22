#include <stdio.h>
int main()
{
    int n;

    while (scanf("%d", &n) != EOF) // eta EOF er format. ei format mukhosto korte hobe.
    {
        if (n == 1999)
        {
            printf("Right\n");
            break; // ekhane break must dite hobe. input nitei thakbo. jokhoni 1999 hobe, ami input newa off kore dibo.
        }

        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}

/*
    1. End Of File (EOF) holo user amake unlimited input ditei thakbe. jotokhon na ami nirdisto ekta input pai. EOF e ami koyta input nibo fixed na.
    2. ei problem e amar password holo '1999'. jotokhon password right na hobe totokhon ami input nitei thakbo. koy hajarbar dewar por amar password correct hobe ami jani na. So, eta EOF diye solve korte hobe.
*/