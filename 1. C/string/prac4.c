// string e vowel count kora lagbe. amake ekta line dibe with space. capital alphabet ow thakbe.

#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    fgets(a, 50, stdin); // user er kach theke sentence input nibo with space tai fgets() use korsi

    int count = 0;

    int i = 0;
    while (a[i] != '\0')
    {
        if (a[i] >= 'A' && a[i] <= 'Z') // capital ke small e convert korar condition
        {
            a[i] = a[i] + 32; // ei jaygay convert korar por value take a[i] te store kora hoice.
        }

        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            count++;
        }
        i++;
    }

    printf("%d", count);

    return 0;
}