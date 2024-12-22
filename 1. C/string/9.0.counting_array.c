#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n); // array size input nilam

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); // n size er array element input nilam
    }

    int count[10] = {0}; // counting array nibo. counting array ta int type hobe and counting array er sob element 0 hobe.

    // main code start.

    for (int i = 0; i < n; i++) // loop array size porjonto chalabo
    {
        count[a[i]]++;
    }

    for (int i; i < 10; i++) // print korbe count array size porjonto
    {
        printf("%d - %d\n", i, count[i]);
    }

    return 0;
}

/*
   1. code khubi simple. eitar basic bojhatai main. khatay details kora ase.

   2. ei code e only 0 the 9 porjonto cont korbe. 10,11,12,.... koyta ase ta count korbe na. jodi array element dewa thake tahole maximum element porjonto
      loop nile 10,11,12,... print kore dibe. and counting array taw maximum value porjonto nibo.

   3. but ami jodi array element aage thekei na jani tahole 3 ta step e solve korbo.
        step 1: find maximum number
        step 2: counting array er size hobe: count[maximum number +1] nibo.
        step 3: baki code same logic e korbo.
*/