// no returns a value and argument or parameter passed

#include <stdio.h>

void add(int x, int y) // jehetu kono value return korbe na tai user define function er datatype void.
{
    int sum = x + y;
    printf("%d", sum);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    add(a, b);
    return 0;
}