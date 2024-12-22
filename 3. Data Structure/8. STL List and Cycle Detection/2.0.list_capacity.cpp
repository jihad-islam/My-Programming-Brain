#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30};
    cout << myList.max_size() << endl; // list e maximum kotogula node rakha jay tar size.

    for (int val : myList)
    {
        cout << val << endl; // 10, 20, 30 output dibe.
    }

    myList.clear(); // clear function value delete kore dey and size 0 kore dey.

    /*
        vector e capacity() function thaklew list e capacity() function nai keno?

        1. capacity function vector or dynamic array er size baraya rakhto jeno notun  kono value input kora jay. dhoro max_size() function use kore ekta vector er maximum size 1 lakh pailam. but vector or dynamic array ta memory te 1 lakh size dokhol kore rakhbe na, karon ete memory waste hobe. maximum size jotoi hok capacity function ta amar jototuku memory dorkar thik tototuku allocate kore dito.

        2. but linked list eto array er moto aage theke memory allocate korar proyojon nai. linked list e ekta value insert korte hoile linked list jekhanei faka jayga pabe shekhanei insert kore dibe. linked list e memory allocation er kono jhamela nai. tai list e kono capacity() function er proyojon nai.
    */

    return 0;
}