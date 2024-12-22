#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);

    if(a>=97 && a<=122)  // if(a>='a' && a<='z')
    {
        printf("small letter\n");
    }

    else if(a>=65 && a<=90)  //  if(a>='A' && a<='Z')
    {
        printf("capital letter\n");
    }

    else
    printf("invalid input\n");

    
    return 0;
}