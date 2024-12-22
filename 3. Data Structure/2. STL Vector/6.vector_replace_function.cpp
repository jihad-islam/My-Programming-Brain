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

    replace(v.begin(), v.end(), 2, 100); // prothom duita condition holo kotha theke loop chalano start korbe and kothay sesh korbe. then kon value ke khujbe oita disi, then oi value er poriborte kon value replace korbe oita disi. note: ami always begin to end porjonto loop chalabo na, code er proyojon onujayi condition change korbo

    for (int x : v) // ranged based for loop. only value return dibe, index retrun dibe na
    {
        cout << x << " ";
    }
    cout << endl
         << endl;

    return 0;
}