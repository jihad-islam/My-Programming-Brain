// c diye basic code

#include <stdio.h>
int main()
{
    char a;
    int count[26] = {0};

    while (scanf(" %c", &a) != EOF)
    {
        count[a - 'a']++;
    }

    for (int i = 'a'; i <= 'z'; i++)
    {
        if (count[i - 'a'] != 0)
        {
            printf("%c : %d\n", i, count[i - 'a']);
        }
    }

    return 0;
}