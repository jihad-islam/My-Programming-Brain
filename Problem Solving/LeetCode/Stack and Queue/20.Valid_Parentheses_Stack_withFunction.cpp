#include <bits/stdc++.h>
using namespace std;

/*
    1. eta ekta famous problem. interview e onek ashe.

    2. amake valid parenthesis milaite hobe.
            () : valid
            {([])} : valid

            ( : invalid
            ({[) : invalid
*/

bool isValid(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            else
            {
                // if (c == ')' && st.top() == '(')
                // {
                //     st.pop();
                // }
                // else if (c == '}' && st.top() == '{')
                // {
                //     st.pop();
                // }
                // else if (c == ']' && st.top() == '[')
                // {
                //     st.pop();
                // }

                if ((c == ')' && st.top() == '(') || (c == '}' && st.top() == '{') || (c == ']' && st.top() == '['))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }
    return st.empty();
}

int main()
{
    string s;
    cin >> s;

    if (isValid(s))
        cout << "Valid\n";
    else
        cout << "Invalid\n";

    return 0;
}