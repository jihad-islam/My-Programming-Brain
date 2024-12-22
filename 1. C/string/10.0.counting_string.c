#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];    // string er size iccha moto nibo, 1 lakh ow hote pare
    scanf("%s", a); // string input nilam

    int count[26] = {0}; // counting array always int hisebe newa lagbe. ekhane array size 26 newar karon alphabet ase 26 ta. but index shuru hobe 0 theke, tai 25 porjonto index ei 26 cover hoye jabe. but null er jonne 1 baray newa hoise.

    // main code

    for (int i = 0; i < strlen(a); i++) // (1) ekhane string size 1 lakh ow hote pare, but loop string er length porjonto chalabo
    {
        count[a[i] - 97]++; // loop e character dhuktese. tai character ke integer e convert kore count kortesi. etar bekkha note khatay ase. counting array er index shuru hoy 0 theke but 'a' er value 97, 'b' =98,.... tai 97 biyog kore index gule 0,1,2,.... kore newa hoise.
    }

    // print kora
    for (int i = 0; i < 26; i++) //(2)
    {
        if (count[i] != 0)
        {
            printf("%c - %d\n", i + 97, count[i]); // ekhane i+'a' hobe, a[i] hobe na. karon ekhane actually 0 koyta ase, 1 koyta ase, 2 koyta ase evabe count kora hoise. so 0,1,2,3,.... er sathe 'a' jog kore dile character pabo.
        }
    }

    return 0;
}

/*
    1. counting loop or first loop kokhonoi 26 porjonto chalabo na. karon amar kache 1000 size er array ase. amake thousand ta character ke reach kora lagbe. ami 26 porjonto loop chalaile shobgulo character ke reach korte parbo na.

    2. output loop or second loop ta 26 porjonto chalaisi karon ami already thousand ta character ghure ashchi, jehetu eita alphabet tai 10 hajar character thaklew sheigula a theke z er moddhei hobe. tai second loop 26 porjonto chalaisi.


    3. ei jinish ta khub valo moto kheyal kora lagbe amar kaj ki, kaj onujayi decide kora lagbe ami length porjonto loop chalabo naki 26 porjonto loop chalabo.
*/