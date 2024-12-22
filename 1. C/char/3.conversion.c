#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);

    int ans =0;

    if(a>='a' && a<='z')
    {
        ans = a-32;         //deference between A and a is 32
        printf("%c",ans);
    }

    else if(a>='A' && a<='Z')
    {
        ans = a+32;
        printf("%c",ans);
    }


    return 0;
}