// no returns a value and no argument or parameter passed

#include <stdio.h>

void add(void) // 1st void: user define function kono value return korbe na.  2nd void: user define function e kono value pass hobe na.
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("%d\n", sum);
}

int main()
{
    add(); // jotobar function call korbo totobar jog korbe
    add();
    return 0;
}