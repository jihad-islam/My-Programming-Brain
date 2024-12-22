// ekta array input nibo. array te 1 na pawa porjonto kotogula element ase count korbo.

#include <stdio.h>

int count_before_one(int *arr, int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) == 1)
        {
            break;
        }
        count++;
    }

    return count;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &*(arr + i));
    }

    int size = sizeof(arr) / sizeof(*arr);

    int result = count_before_one(arr, size);

    printf("%d", result);

    return 0;
}