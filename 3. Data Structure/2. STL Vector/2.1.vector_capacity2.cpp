/*
    1. v.size() and v.resize() onek beshi use hoy. v.clear() rarely lage.
    2. protita function eri time complexity ase. sheet e time complexity likha ase. na bujhle video dekhe nibo.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    cout << v.capacity() << endl; // capacity 8 dekhabe
    cout << v.size() << endl;     // capacity 8 but size 5, karon element ase 5 ta

    for (int i = 0; i < v.size(); i++) // 5 ta value dekhbo
    {
        cout << v[i] << " ";
    }
    cout << endl
         << endl;

    v.resize(2); // new size 2 kore dilam
    cout << v.size() << endl;
    v.resize(7);
    for (int i = 0; i < v.size(); i++) // jehetu size 2 theke 7 korsi. tai prothom duita value dekhabe baki gulo 0 dekhabe
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.resize(10, 100); // aage thekei 7 ta index e value assign kora ase. ekhn index er size baraya 7 theke 10 korsi. ei 3 ta extra index e 100 assign hobe.

    for (int i = 0; i < v.size(); i++) // jehetu size 2 theke 7 korsi. tai prothom duita value dekhabe baki gulo 0 dekhabe
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}