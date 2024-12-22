// returns a value and argument or parameter passed
// this type is preferrsable

#include <stdio.h>

int sum(int a, int b)
{
    int add = a + b;
    return add;
}

int main()
{
    int a, b; // ei main function er a,b and sum function er a,b same na. ami ekhane x,y nyew kaj korte partam.
    scanf("%d %d", &a, &b);

    int result = sum(a, b); // ekhane function call korlam then jei value paisi oita result er moddhe rekhe disi
    printf("%d", result);

    // printf("%d", sum(a, b)); // jodi evabe kori tahole ami ekhane sum ke recieve korbo. add ken na.

    return 0;
}