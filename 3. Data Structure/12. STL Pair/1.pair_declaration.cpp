// 1
#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p; // pair holo onekta static constructor er moto, jekhane duita element thake first, second.
    p.first = 10;
    p.second = 20;

    cout << p.first << " " << p.second << endl;

    return 0;
}

// 2
#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, char> p;
    p.first = 10;
    p.second = 'a';

    cout << p.first << " " << p.second << endl;

    return 0;
}

// 3
#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, char> p = {10, 'a'}; // eivabei always assign korbo.

    cout << p.first << " " << p.second << endl;

    return 0;
}

// 4
#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, char> p;
    p = make_pair(10, 'a');

    cout << p.first << " " << p.second << endl;

    return 0;
}
