// string e vowel count kora lagbe. amake ekta line dibe with space. capital alphabet ow thakbe.

#include <stdio.h>
#include <string.h>

int vowel(char *a, int i)
{
    if (a[i] == '\0') // base case
        return 0;

    int count = 0;
    if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
    {
        count = 1; // jotobar vowel pabe totobar count 0 theke 1 hobe.
    }

    return count + vowel(a, i + 1); // protibar recursive call e count 0 hoye jay. tai tai recursive call er sathe count ta jog kore disi.
}

int main()
{
    char a[201];
    fgets(a, 201, stdin);

    int i = 0;
    while (a[i] != '\0')
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] + 32;
        }
        i++;
    }

    int result = vowel(a, 0);

    printf("%d", result);

    return 0;
}