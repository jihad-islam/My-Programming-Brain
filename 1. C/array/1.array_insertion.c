#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n); // arr size nilam

    int arr[n + 1], i; // as inserting one value, arr size or arr index will be n+1.  imp: eikhane n arr size hishebe ase. ex: arr[5] means 5 ta ghor nisi

    for (i = 0; i < n; i++) // taking arr values
    {
        scanf("%d", &arr[i]);
    }

    int pos, val; // taking insertion position and insertion value
    scanf("%d %d", &pos, &val);

    // main code

    for (i = n; i >= pos + 1; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;

    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}