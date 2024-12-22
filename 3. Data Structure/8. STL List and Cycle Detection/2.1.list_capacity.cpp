#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 50}; // list er size 5.
    cout << myList.size() << endl;           // output 5 dekhabe.

    myList.resize(2); // resize kore 2 banailam. so prothom 2 ta value theke jabe.

    cout << myList.size() << endl // output 2 dekhabe.
         << endl;

    myList.resize(5); // erpor resize kore 5 banailam. prothom duitay 10,20 pabo then bakigulay 0 pabo

    myList.resize(10, 100); // prothom duita ghore 10,20 pabo. then 5 ta ghor porjonto 0 pabo. then baki guloy 100 pabo.
    for (int val : myList)
    {
        cout << val << endl;
    }

    return 0;
}