// jei serial e input dewa hobe oi serial count print kore dekhabe

#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", a);

    char count[26] = {0};

    for (int i = 0; i < strlen(a); i++)
    {
        count[a[i] - 97]++;
    }

    for (int i = 0; i < strlen(a); i++)
    {
        if (count[a[i] - 'a'] != 0)
        {
            printf("%c - %d\n", a[i], count[a[i] - 'a']);
        }

        count[a[i] - 'a'] = 0; // kivabe kaj kore bujhi nai. dorkar porle module dekhe nite hobe.
    }

    return 0;
}