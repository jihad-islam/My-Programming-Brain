#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            printf(" ");
        }

        for (int col = 1; col <= row * 2 - 1; col++)
        {
            if (row % 2 != 0)
            {
                printf("#");
            }

            if (row % 2 == 0)
            {
                printf("-");
            }
        }
        printf("\n");
    }

    for (int row = n - 1; row >= 1; row--)
    {
        for (int col = 1; col <= n - row; col++)
        {
            printf(" ");
        }

        for (int col = 1; col <= row * 2 - 1; col++)
        {
            if (row % 2 != 0)
            {
                printf("#");
            }

            if (row % 2 == 0)
            {
                printf("-");
            }
        }
        printf("\n");
    }

    return 0;
}

/*

5
    #
   ---
  #####
 -------
#########
 -------
  #####
   ---
    #

*/