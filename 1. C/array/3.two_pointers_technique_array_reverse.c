// two pointers technique. for loop diye arr index ke reverse e print kora hoy, but two pointers technique diye value reverse kora hoy.

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int i = 0;
    int j = n - 1;
    int temp = 0;

    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}