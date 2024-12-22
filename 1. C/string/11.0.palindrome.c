#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", a);

    int i = 0;
    int j = strlen(a) - 1;
    int count = 0;

    while (a[i] != '\0')
    {
        if (a[i] != a[j])
        {
            count++;
            break;
        }
        i++;
        j--;
    }

    if (count == 0)
    {
        printf("Palindrome");
    }

    else
    {
        printf("Not Palindrome");
    }

    return 0;
}