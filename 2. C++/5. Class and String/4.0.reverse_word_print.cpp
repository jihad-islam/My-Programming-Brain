// STRING IN FUNCTION

#include <bits/stdc++.h>
using namespace std;

void print(string &s) // ekhane ami string er address accept korsi. but ami main function theke kono pointer pathai nai. string holo ekta class. ei class theke kono pointer pathano jay na. ami sorasori address receive korte parbo. ekhane address receive na korle main function e string er kono change hobe na. pointer pathai nai but address accept korsi etake string er referance bole. normal array or character array te kintu pointer ei pathaite hobe. evabe korle hobe na.
{
    s = "Islam";
}

int main()
{
    string s = "Jihad";

    print(s); // ekhane print user defined function. c++ e p rint boila kono keyword nai.

    cout << s << endl;

    return 0;
}