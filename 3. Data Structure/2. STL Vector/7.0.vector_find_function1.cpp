/*
    1. replace and find vector er function na. ei duita algorithm header file er under e pore.
    2. replace and find duita function ei loop chalaya desire value khuje then replace or index return dey.

    3. jehetu begin to end loop chalay tai replace and find duita function eri time complexity O(N).

    4. string e find function amake index return dito. but vector e find function amake iterator return dey. string class er topic e iterator er basic ase.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 2, 4, 3, 5, 1, 2, 4, 5, 3, 2};

    vector<int>::iterator it;
    it = find(v.begin(), v.end(), 5); // find() function 5 ke khujbe. jodi khuje pay then 5 jei index e ase oi index er address retrun korbe, eije traverse kortese etakei iterator bole. actually find function always iterator return kore. tai iterator accept korar jonne ami aagei vector er ekta iterator create kore nisi.

    cout << *it; // as iterator is a pointer variable tai dereferance kore print korechi. 5 jei index e ase oi index er address iterator e ase, tai dereferace korle ami 5 ke output pabo.

    return 0;
}