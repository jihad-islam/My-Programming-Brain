/*
    user theke multiple array nibo and ekta digit input nibo protita array er jonne.
    amake check korte hobe oi  digit ta array te ase kina.
*/

#include <stdio.h>
int main()
{
    int p;
    scanf("%d", &p);

    for (int j = 0; j < p; j++)

    {

        int n;
        scanf("%d", &n);

        int a[n];

        for (int i = 0; i < n; i++) // array input nilam
        {
            scanf("%d", &a[i]);
        }

        int m;
        scanf("%d", &m); // m input nilam jeta repeat ase kina check korbo

        int count = 0;
        for (int i = 0; i < n; i++) // array size (n) porjonto loop chalabo
        {
            if (a[i] == m)
            {
                count++; // jodi m array te thake tahole count hobe and break execute hoye loop theke ber hoye jabe.
                break;
            }
        }
        if (count != 0)
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
    }

    return 0;
}

/*
    learning : 1. break loop ke terminate kore. loop er moddhe conditional statement e break use korlew loop ke terminate kore dibe.
               2. eikhane kivabe yes and no print kora hoise ei technique ta jene rakhte hobe.
*/