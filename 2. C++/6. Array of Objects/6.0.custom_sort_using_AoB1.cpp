/*
    1. custom sort using array of object(aob) eta ektu complex sorting tai part by part code likhbo.

    2. ami string input nibo then oi string e jei alphabet shobcheye beshi ase oita onujayi alphabet gulo totobar count korbe.

    3. ei code er protita line valo moto bojha lagbe. shurute string input nibo, but string ta niye ei code e kono kaj kori nai. just a to z alphabet print hobe with the count of 0.

    4. ami object er er ekta array nibo. oi array te shurute garbage value thakbe. then oi array te ami duita jinish assign korbo. first alphabet a to z assign korbo. secondly count er jonne arekta array te 0 assign korbo. ei jinish ta visualize korle bujhte easy  hobe.
*/

#include <bits/stdc++.h>
using namespace std;

class Freq
{
public:
    char alp;
    int count;
};

int main()
{
    string s;
    cin >> s;

    Freq f[26]; // ekta array declare korlam jekhane garbage value ase

    for (int i = 0; i < 26; i++)
    {
        f[i].alp = char(i + 'a'); // array te alphabet rakhlam. ekhane type casting kora hoise.
        f[i].count = 0;           // another array te 0 rakhlam
    }

    for (int i = 0; i < 26; i++)
    {
        cout << f[i].alp << " " << f[i].count << endl;
    }

    return 0;
}
