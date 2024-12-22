#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int pos;
    scanf("%d", &pos);

    for (i = pos; i < n - 1; i++) // ami n-1 tomo arr ta blank rakhbo. so n-1 er aager arr porjonto kaj korlei hobe
    {
        arr[i] = arr[i + 1];
    }

    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}