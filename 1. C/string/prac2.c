/*
    1. eita ekta interesting problem. amake just ekta string input dibe, amake string e character count kore output dite hobe. but twist hocche string er size 10^7. eto boro string input newa impossible. tai amake EOF use kore unlimited porjonto character input niye ei problem solve korte hobe.

    2. ei code terminal e run korbe na. karon eita unlimited input nitei thakbe. eitar input output dekhte hoile input.txt and output.txt use korte hobe.

    3. ei code terminal e run na korar main reason hocche, ami while loop er moddhe kono break; statement dei nai.
*/

#include <stdio.h>
int main()
{
    char a;
    int count[26] = {0};

    while (scanf(" %c", &a) != EOF)
    {
        count[a - 'a']++;
    }

    for (int i = 'a'; i <= 'z'; i++)
    {
        if (count[i - 'a'] != 0)
        {
            printf("%c : %d\n", i, count[i - 'a']);
        }
    }

    return 0;
}
