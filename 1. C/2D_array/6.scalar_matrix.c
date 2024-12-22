// scalar matrix: je diagonal matrix er korner value gulo same

#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m); // n=row, m=column
    int a[n][m];
    int element = n * m;

    for (int i = 0; i < n; i++) // array input nilam
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int count = 0;

    if (n != m) // eta square matrix kina eita first e check korbo
    {
        count = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) // inner loop
        {
            if (i == j) // diagonal e ashle check korbo protita diagonal er value same kina
            {
                if (a[i][j] != a[0][0])
                {
                    count = 1;
                    break;
                }
                continue; // eikhane must continue; statement use kora lagbe. karon continue statement use na korle  nicher if condition taw check korbe. tokhon nicher always count 1 hoye jabe. and protita matrix not scalar dekhabe. continue statement use korte na chaile nicher if statement er poriborte if else statement use korlew hobe. but duitai if statement use korte chaile continue use kora must.
            }

            if (a[i][j] != 0) // daigonal baade jekono element non zero hole count++ korbo and loop theke ber hoye jabo.
            {
                count = 1;
                break;
            }
        }
    }

    if (count == 0)
    {
        printf("Scalar Matrix\n");
    }

    else
    {
        printf("Not Scalar Matrix\n");
    }

    return 0;
}