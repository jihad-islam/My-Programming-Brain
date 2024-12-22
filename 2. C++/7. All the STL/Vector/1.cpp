// declaration, access, copy

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(5); // ei jaygay vul korsi. v2[5] dile vector er array hoye jabe. first bracket ei dewa lagbe.
    vector<int> v3(5, 10);

    v3.front(); // vector er first index er value
    v3.back();  // vector er last index er value

    v3.push_back(10);
    v3.pop_back();

    for (auto a : v3)
        cout << a << endl;

    // vector copy
    vector<int> v4(v3);

    // array copy
    int a[6] = {1, 2, 3, 4, 5, 6};
    vector<int> v3(a, a + 6);

    return 0;
}