#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector assign
    vector<int> x = {10, 20, 30};
    vector<int> v = {1, 2, 3};
    v = x; // O(1), jehetu duita vector eri size same tai complexity O(1) but always to r same size thakbe na. tokhon time complexity O(N) hobe. mane duita vector er moddhe jei vector er size beshi oita count hobe.

    vector<int> x1 = {10, 20, 30};
    vector<int> v1 = {1, 2, 3, 4, 6, 7, 7, 13, 26};
    x1 = v1; // etar complexity O(N)

    for (int i = 0; i < x1.size(); i++)
    {
        cout << x1[i] << " ";
    }
    cout << endl
         << endl;

    x1.pop_back(); // amra push_back() aagei dekhechi. pop_back() last index er value ta delete kore dey. jotobar pop_back() use korbo protibar ekta kore value delete korbe
    x1.pop_back();
    for (int i = 0; i < x1.size(); i++)
    {
        cout << x1[i] << " ";
    }
    return 0;
}