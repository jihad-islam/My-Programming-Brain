#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1
    string s = "Hello World"; // ekhane string holo class. then s holo class er nam. s er poirborte onno kono variable ow use korte pari.
    cout << s.size() << endl
         << endl; // jekono class er object ke dot diye access kore. ei function ta string er length ber kore dibe.

    // 2
    string a = "jihad";

    a.clear(); // ei function ta string ke clear kore dey. ei function use korar por string size 0 hoye jay

    if (a.empty() == true) // empty() function ta check kore string empty or not and boolean value return kore. empty hole 1 and empty na hole 0;
        cout << "Empty" << endl
             << endl;
    else
        cout << "Not Empty" << endl
             << endl;

    // 3
    string b = "Mohammad_Jihad_Islam"; // 20 ta character ase
    cout << b << endl;

    b.resize(8);       // b string er size holo 20, ami resize function use kore size 8 kore dilam
    b.resize(15, 'X'); // abar size baraya 8 theke 15 banaisi. but character 8 porjontoi print hobe. then 9 theke 15 porjonto just X print hobe.

    cout << b.size() << endl;
    cout << b << endl
         << endl;

    // sesher duita lagbe na. just concept clear

    cout << s.max_size() << endl
         << endl; // khub ekta lage na. amar machine koto boro string nite pare eta dekhabe. online judge e 10^6 porjonto accept kore. amar machine aaro beshi accept kore. so online judge e 10^6 er beshi string hole character hisebe input nite hobe.

    // lagbe na
    cout << s.capacity() << endl
         << endl; // string holo ekta dynamic class. it means string tar size automatically baraite and komaite  pare.  ami jodi 100 character er string dei then 's' er capacity 100 hobe. jodi 5k size er  string dei then 's' er capacity 500 ei hobe.
    return 0;
}