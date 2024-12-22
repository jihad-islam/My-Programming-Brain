void reverseStack(stack<int> &s)
{
    // Write your code here

    if (s.empty())
        return; // base case

    int x = s.top();
    s.pop();

    reverseStack(s); // recursive call
    // reverse hoye gse

    stack<int> st;

    while (!s.empty())
    {
        st.push(s.top());
        s.pop();
    }

    st.push(x);

    while (!st.empty())
    {
        s.push(st.top());
        st.pop();
    }
}