// last part e count onujayi descending order e print korechi. ekhn just alphabet gule order onujayi print korbo

#include <bits/stdc++.h>
using namespace std;

class Freq
{
public:
    char alp;
    int count;
};

bool cmp(Freq a, Freq b) // last part e shudhu count beshi hole sort korto. etay count same hole alphabet onujayi sort korbe.
{
    if (a.count == b.count)
        return a.alp < b.alp;

    else
        return a.count > b.count;
}

int main()
{
    string s;
    cin >> s;

    Freq f[26];

    for (int i = 0; i < 26; i++)
    {
        f[i].alp = char(i + 'a');
        f[i].count = 0;
    }

    for (char c : s)
    {
        f[int(c - 'a')].count++;
    }

    sort(f, f + 26, cmp); // sorting function

    for (int i = 0; i < 26; i++)
    {
        if (f[i].count != 0)
        {
            for (int j = 0; j < f[i].count; j++) // ei condition ta aagew use korechi, dorkar hole mukhosto kore felo. ei condition ta holo ekta alphabet jotobar thakbe totobar print korbe.
            {
                cout << f[i].alp;
            }
        }
    }

    return 0;
}

/*
    1. custom sort using array of object(aob) eta ektu complex sorting tai part by part code likhbo.

    2. ami string input nibo then oi string e jei alphabet shobcheye beshi ase oita onujayi alphabet gulo totobar count korbe.

    3. ei code er protita line valo moto bojha lagbe. shurute string input nibo, but string ta niye ei code e kono kaj kori nai. just a to z alphabet print hobe with the count of 0.

    4. ami object er er ekta array nibo. oi array te shurute garbage value thakbe. then oi array te ami duita jinish assign korbo. first alphabet a to z assign korbo. secondly count er jonne arekta array te 0 assign korbo. ei jinish ta visualize korle bujhte easy  hobe.
*/
