// 1
#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p1(40, 30); // first and second duitai same hote hobe, that means equal or not equal e duitai check korbe. but less than, greater than e prothom ta aage check korbe.
    pair<int, int> p2(30, 40);

    if (p1 == p2)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;

    return 0;
}

// 2
#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p1(40, 30); // prothom value jar boro shei boro, prothom value same hole second ta compare korbe.
    pair<int, int> p2(30, 40);

    if (p1 > p2)
        cout << "p1 greater" << endl;
    else
        cout << "p2 greater" << endl;

    return 0;
}
