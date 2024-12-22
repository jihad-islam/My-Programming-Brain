/*
    1. namespace hocche ekata group jar moddhe function, variable and even class kew rakha jay
    2. duita namespace er under e same nam er variable thakte parbe na. sejonne age1 and age2 use kora hoise.
*/
#include <bits/stdc++.h>
using namespace std;

namespace Rakib // namespace create korte just namespace likhe namespace er nam dewa lage. and namespace always public. ekhane private and  protected er kahini nai
{
    int age1 = 24;

    void hello1()
    {
        cout << "Rakib namespaces" << endl
             << endl;
    }
}

namespace Sakib
{
    int age2 = 30;
    void hello2()
    {
        cout << "Sakib namespaces" << endl
             << endl;
    }
}

// using namespace Rakib;
using namespace Sakib;

int main()
{
    cout << Rakib ::age1 << endl; // ekhane rakib er namespace call korsi. evabew korte pari or main() er aage using namespace Rakib; ow use korte pari.
    cout << age2 << endl;         // Sakib namespace upore declare korsi tai ekhane just print kore disi.

    // cout << age << endl;
    Rakib::hello1(); // function call using namespace

    hello2(); // function call without namespace. karon upore declare kora hoise.

    return 0;
}