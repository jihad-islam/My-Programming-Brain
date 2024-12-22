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
    myStack s1;
    myStack s2;

    int n, m;
    cin >> n >> m;

    while (n--)
    {
        int x;
        cin >> x;
        s1.push(x);
    }

    while (m--)
    {
        int x;
        cin >> x;
        s2.push(x);
    }

    bool flag;
    myStack s3;

    if (s1.size() != s2.size())
        flag = false;

    else
    {
        while (!s2.empty())
        {
            s3.push(s2.top());
            s2.pop();
        }

        while (!s1.empty())
        {
            if (s1.top() != s3.top())
            {
                flag = false;
                break;
            }
            else
                flag = true;

            s1.pop();
            s3.pop();
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}