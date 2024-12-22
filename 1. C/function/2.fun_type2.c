// returns a value and no argument or parameter passed

#include <stdio.h>

int add(void) // jehetu add function e kono argument pass hoy nai tai kono variable likha hoy nai.
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    return sum;
}

int main()
{
    int sum = add(); // jehetu argument pass hobe na tai function call e kono value dei na. ei main function er sum and add function er sum same na. ami ekhaner sum change kore onno variable o use korte pari.
    printf("%d", sum);

    return 0;
}

/*
    argumet pass na hoile user define funtion er moddhe hoy faka rakhbo or void declare korbo.
        1. ind add(), jodi evabe rakhi tahole main functin e jokhobn function call korbo, tokhon
           main function e value dilew user define function ta ignore korbe.

        2. int add(void), jodi evabe rakhi tahole main functin e jokhobn function call korbo, tokhon
           main function e value dile user define function e error dekhabe.
*/