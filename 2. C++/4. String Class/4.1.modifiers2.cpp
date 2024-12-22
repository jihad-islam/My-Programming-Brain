#include <bits/stdc++.h>
using namespace std;
int main()
{
     string a = "Jihad";
     // a = "JihadI";     // works
     a = a + "I"; // works. eta preferred
     // a[5] = 'I';       // didn't work
     // a.push_back('I'); // works. push_back() means string er last e ami ekta character add korte chai.

     cout << a << endl
          << endl;

     a.pop_back(); // pop_back() means string er last character ke delete kore dewa
     cout << a << endl
          << endl;

     a.pop_back();
     cout << a << endl
          << endl;

     a = "Islam"; // shurute a te jihad chilo ekhn islam ase. amra evabei asign kori. but c++ e assign ero ekta function ase. just function ta poricito hobe. use korbo na.
     // a.assign("Islam"); // assign er function in c++
     cout << a << endl;

     return 0;
}