#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    /*
        print specific row elements:
             1. suppose ami row 3 er all element dekhte chai. eta hobe:  a[2][0], a[2][1], a[2][2], a[2][3], etc
             2. that means row fixed thakbe, loop cholbe main matrix er coloumn er upor. main matrix er coloumn holo n.
    */
    int row;
    scanf("%d", &row);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[row][i]);
    }
    printf("\n");

    /*
        print specific coloumn elements:
            1. suppose ami coloumn 3 er all element dekhte chai. eta hobe:  a[0][2], a[1][2], a[2][2], a[3][2], etc
            2. that means coloumn fixed thakbe, loop cholbe main matrix er row er upor. main matrix er row holo m.
    */
    int col;
    scanf("%d", &col);

    for (int i = 0; i < m; i++)
    {
        printf("%d\n", a[i][col]);
    }

    return 0;
}

/*

5 5
A[0][0] A[0][1] A[0][2] A[0][3] A[0][4]
A[1][0] A[1][1] A[1][2] A[1][3] A[1][4]
A[2][0] A[2][1] A[2][2] A[2][3] A[2][4]
A[3][0] A[3][1] A[3][2] A[3][3] A[3][4]
A[4][0] A[4][1] A[4][2] A[4][3] A[4][4]


*/