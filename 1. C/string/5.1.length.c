#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    // fgets(a, 20, stdin);
    scanf("%s", a);

    int length = strlen(a); // fgets() use korle null soho length dekhabe. r scanf use korle null soho length dekhabe na
    printf("%d", length);

    return 0;
}