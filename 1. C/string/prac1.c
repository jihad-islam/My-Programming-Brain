#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000001];
    fgets(a, 1000001, stdin);

    int i = 0;
    while (a[i] != '\\') // ekta backward slash print kora jay na, duita dite hoy.
    {
        printf("%c", a[i]);
        i++;
    }

    return 0;
}

/*
    input nibo. \(back slash) na pawa porjonto print korbo.
    input: google \facebook
    output: google
*/