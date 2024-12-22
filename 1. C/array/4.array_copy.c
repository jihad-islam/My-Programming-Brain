#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) // taking array 1
    {
        scanf("%d", &a[i]);
    }

    int m;
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++) // taking array 2
    {
        scanf("%d", &b[i]);
    }

    int ans[n + m]; // declaring third array, where we will copy array 1 and array 2. size of arr3 = arr1 + arr2.

    // main code
    for (int i = 0; i < n; i++) // putting elements of arr1 into arr3. arr1 e je koyta ghor ase oi ghor porjonto loop chalabo
    {
        ans[i] = a[i];
    }

    int i = n;
    for (int j = 0; j < m; j++) // putting elements of arr2 into arr3.
    {
        ans[i] = b[j];
        i++;
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", ans[i]);
    }
    return 0;
}