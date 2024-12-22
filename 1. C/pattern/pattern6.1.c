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

        for (int col = 1; col <= row; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }

    return 0;
}

/*

5
    1
   12
  123
 1234
12345

*/