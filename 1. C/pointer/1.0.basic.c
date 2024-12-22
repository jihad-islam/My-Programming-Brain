#include <stdio.h>
int main()
{
    int a = 5;
    int *p = &a;

    printf("%d\n", a);
    printf("%p\n", &a);

    p = &a;

    printf("%p\n", p);
    printf("%d\n", *p);

    return 0;
}