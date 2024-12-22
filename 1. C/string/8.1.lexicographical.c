#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    
    int v=strcmp(a,b);
    
    if(v<0)
    {
        printf("A is smaller\n");
    }

    else if(v>0)
    {
        printf("B is smaller\n");
    }

    else 
    {
        printf("Same\n");
    }

    return 0;
}

/*
    strcmp(a,b) ei library function ta duita string compare kore 3 ta value dey.
            1. jodi a=b hoy tahole 0 output dibe
            2. jodi a>b hoy positive kono number output dibe
            3. jodi a<b hoy tahole negative kono number output dibe
*/