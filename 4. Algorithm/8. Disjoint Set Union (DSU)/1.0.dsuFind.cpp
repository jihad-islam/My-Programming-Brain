/*
    1. disjoint set union(dsu) or union find algorithm. dsu ekta data structure jeta graph e kaje lage. and ei dsu data structure ta union and find ei duita algorithm niye kaj kore, tai dsu ke union find algorithm ow bola hoy.

    2.
        math e disjoint set bolte bujay: A={1,2,3}, B={4,5,6} ei duita set ke intersection korle null pabo, tokhon A and B set ke disjoint set bole.

        Programming e dsu er theme holo: dui or dui er beshi group thakle oi group gulo jodi eksathe milito hoy tahole tader leader 1 jon ei hobe.

        protita group er leader khuje ber kore find algorithm. then group gula milito hoile tader shobar jonne 1 ta leader fixed kore union algorithm.

    3. find algorithm kono group (array) er leader ber kore.

    parent array:   -1 0  1  2 -1
                     0 1  2  3  4
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5; // node koyta thakbe eta question e bole dewa thakbe. dhore nisi maximum 10^5 ta node thakbe.

int par[N]; // jei koyta node oi node gula rakhar jonne oi size er parent array nilam

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
        par[i] = -1; // shurute shobai shobar leader

    par[1] = 0;
    par[2] = 1;
    par[3] = 2;
}

int find(int node) // O(n). etar complexity kharap, tai eta use korbo na. optimized ta use korbo. but recursion ta bojha lagbe.
{
    if (par[node] == -1)
        return node;

    return find(par[node]);
}

int main()
{
    dsu_initialize(5); // amra parent array 10^5 size initialize kore rakhsi. but kaj korbo 4 ta node niye.

    cout << find(0) << endl;
    cout << find(1) << endl;
    cout << find(2) << endl;
    cout << find(3) << endl;
    cout << find(4) << endl;

    return 0;
}