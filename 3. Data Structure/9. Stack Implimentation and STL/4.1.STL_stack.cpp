/*
    1. array(vector) and doubly diye stack implementation ta basic er jonne jana lagbe. but problem solving er jonne always STL use korbo.

    2. STL e aage thekei pop(), push(), top() create kora ase. so amar eigula niye matha ghamanor dorkar nai.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}