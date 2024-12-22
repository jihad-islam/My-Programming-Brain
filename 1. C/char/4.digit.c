#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);

    if(a>='0' && a<='9') //digit ke character hishebe newa hoise
    {
        printf("Digit\n");
    }
    
    else if(a>='a' && a<='z')
    {
        printf("Small letter\n");
    }

    else if(a>='A' && a<='Z')
    {
        printf("Capital letter\n");
    }

    else
    printf("Invalid input\n");

    
    return 0;
}



/*

    1. digit(0-9), number(15,100,-50,etc)
    2. digit kew character hishebe newa jay.
       '0'= 48  (0 ke character hishebe newa hoise jar value 48)
       '9'= 57


*/