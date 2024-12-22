/*
    eta magical tree er pattern. eta pari na. bujhte hobe ekbar.
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int line = (n + 1) / 2 + 5;

    for (int row = 1; row <= line; row++)
    {
        for (int col = 1; col <= line - row; col++)
        {
            printf(" ");
        }

        for (int col = 1; col <= 2 * row - 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            printf(" ");
        }

        for (int col = 0; col < n; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}