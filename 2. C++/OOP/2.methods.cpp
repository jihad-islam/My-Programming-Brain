/*
    1. class er moddher function gulare method or memeber function bole.
    2. class er variable gulare attribute or member variable bole.
*/

#include <bits/stdc++.h>
using namespace std;

class Sum
{
public:
    int a;
    int b;

    int result(int a, int b) // method
    {
        return a + b;
    }
};

int main()
{
    Sum addition;

    addition.a = 5;
    addition.b = 6;

    int x = addition.result(addition.a, addition.b);

    cout << x << endl;

    return 0;
}
