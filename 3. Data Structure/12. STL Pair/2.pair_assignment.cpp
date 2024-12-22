// 1
#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, char> p1, p2;
    p1.first = 10;
    p1.second = 'a';

    p2 = p1;

    cout << p2.first << " " << p2.second << endl;

    return 0;
}

// 2
#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, char> p1(10, 'a');
    pair<int, char> p2(p1);

    cout << p2.first << " " << p2.second << endl;

    return 0;
}
