// find out the minimum and maximum value of an array. swap them and print the array.

#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < n; i++) // min value ber korlam
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    for (int i = 0; i < n; i++) // min value er index ber korlam
    {
        if (a[i] == min)
        {
            min = i;
        }
    }

    for (int j = 0; j < n; j++) // max value
    {
        if (a[j] > max)
        {
            max = a[j];
        }
    }

    for (int i = 0; i < n; i++) // index of max value
    {
        if (a[i] == max)
        {
            max = i;
        }
    }

    int temp = a[min];
    a[min] = a[max];
    a[max] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

// eivabe korbo

#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = INT_MAX;
    int max = INT_MIN;
    int min_ind, max_ind;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            min_ind = i;
        }
    }

    for (int j = 0; j < n; j++)
    {
        if (a[j] > max)
        {
            max = a[j];
            max_ind = j;
        }
    }

    int temp = a[min_ind];
    a[min_ind] = a[max_ind];
    a[max_ind] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}