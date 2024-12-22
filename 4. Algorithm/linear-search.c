#include <stdio.h>
int main()
{
    int arr[]={-3,4,1,88,5,7};
    int searchItem=1;
    int i;

    for(i=0; i<6; i++)
    {
        if (arr[i]==searchItem){
            printf("item found at index %d",i);
            return 0; //eikhane return 0 dewa lagbei
        }
    }

    printf("item is not found");
    return 0;
}