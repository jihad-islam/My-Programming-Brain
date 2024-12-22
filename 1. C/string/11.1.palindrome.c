#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001], b[1001];

    scanf("%s", a);

    strcpy(b, a);

    int i = 0;
    int j = strlen(b) - 1;

    while (i < j)
    {
        char swap = b[i];
        b[i] = b[j];
        b[j] = swap;
        i++;
        j--;
    }

    int result = strcmp(a, b);

    if (result == 0)
    {
        printf("PALINDROME");
    }

    else
    {
        printf("NOT PALINDROME");
    }

    return 0;
}