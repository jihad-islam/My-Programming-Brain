#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val); // tail insert or last value insert
    }

    void pop()
    {
        l.pop_back(); // tail delete
    }

    int top()
    {
        return l.back(); // tail dekahbe
    }

    int size() // O(1)
    {
        return l.size();
    }

    bool empty() // O(1)
    {
        if (l.size() == 0)
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

    for (int i = 0; i < n; i++)
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