#include <stdio.h>
#include <string.h>

void reverse(char *a, int i)
{
    if (a[i] == '\0')
        return;

    printf("%d ", *(a + i) - '0');

    reverse(a, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char a[100];
        scanf("%s", a);

        reverse(a, 0);
        printf("\n");
    }

    // for (int i = 0; i < strlen(a); i++)
    // {
    //     printf("%d ", a[i] - '0');
    // }

    return 0;
}