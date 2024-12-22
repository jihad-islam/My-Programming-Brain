// string copy kora

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Jihad";
    string b = "Islam";

    a += b; // b er string a te copy korlam. c te concatenation use korsilam. c++ e just duita variable jevabe jog kore ovabe dilei hoye jabe. preferred. etake operator overloading bole. oop te shikhbo eta.  operator overloading hocche, jei operator er jeta kaj oi kaj na kore onno kaj kora. ekhane '+' er kaj hocche jog kora but ami jog na kore copy kortesi. tai operator overloading hocche. ei overloading ta class er maddhe modified hoy.

    // a.append(b); // b er string a te copy hoye jabe. function use kore. not preferred

    cout << a << endl;
    cout << b << endl;

    return 0;
}