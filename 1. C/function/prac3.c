/*
    function and pointer use kore kono string er length ber kora.
*/

#include <stdio.h>

int my_len(char *a)
{
    int count = 0;

    int i = 0;
    while (*(a + i) != '\0')
    {
        count++;
        i++;
    }

    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    char a[n];

    scanf("%s", a);

    int result = my_len(a);

    printf("%d", result);
}