// with basic

#include <bits/stdc++.h>
using namespace std;

class Pair
{
public:
    int first, second;

    void make_pair(int a, int b) // just integer er pair.
    {
        first = a;
        second = b;
    }
};

int main()
{
    Pair p;

    p.make_pair(10, 20);

    cout << p.first << " " << p.second << endl;

    return 0;
}

// with pair function

#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<string, int> p;

    p = make_pair("jihad", 20);

    cout << p.first << " " << p.second << endl;

    return 0;
}