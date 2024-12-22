#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myStack st;

    int n;
    cin >> n;

    // for (int i = 0; i < n; i++)
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // while (st.empty() == false)
    while (!st.empty()) // jotokhon na empty hobe loop cholte thakbe.
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}