#include <stdio.h>
int main()
{
    int n;
    printf("Enter array element: ");
    scanf("%d",&n);

    printf("Elements are: ");

    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }


    //code starting from here

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 -i; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}