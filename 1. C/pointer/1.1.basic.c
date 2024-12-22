#include <stdio.h>
int main()
{
    int a = 5;
    int *p;   // pointer or address variable
    p = &a;   // reference
    *p = 100; // dereference

    // int *p = &a;

    printf("%d\n", a);
    printf("%p\n", &a);

    return 0;
}