/*
    1. array(vector) and doubly diye stack implementation ta basic er jonne jana lagbe. but problem solving er jonne always STL use korbo.

    2. STL e aage thekei pop(), push(), top() create kora ase. so amar eigula niye matha ghamanor dorkar nai.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    st.push(10); // 10 automatic push hoise but ami kono function create kori nai. STL e aage thekei function create kora thake.
    st.push(20);

    st.pop();

    cout << st.top() << endl;

    if (!st.empty()) // ekhane kintu loop na. input nile loop hobe.
        cout << st.top() << endl;

    if (!st.empty())
        st.pop();

    return 0;
}