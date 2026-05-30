/*
    1. stack use kore queue implement kora lagbe.
    2. Ei code STL er stack use kore kora hoyeche.
    3. Concept: stack holo LIFO, but queue holo FIFO. Tai temporary stack use kore
       front/head element ber kora hocche.
*/

class MyQueue
{
public:
    stack<int> st;

    MyQueue()
    {
    }

    void push(int x)
    {
        st.push(x);
    }

    int pop() // stack e tail delete kore but amar head delete kora lagbe.
    {
        stack<int> newSt;
        int last;

        while (!st.empty())
        {
            int k = st.top();
            st.pop();
            if (st.empty())
            {
                // last element
                last = k;
                break;
            }
            newSt.push(k);
        }

        while (!newSt.empty())
        {
            st.push(newSt.top());
            newSt.pop();
        }

        return last;
    }

    int peek() // peek() will work like front()
    {
        stack<int> newSt;
        int last;

        while (!st.empty())
        {
            int k = st.top();
            st.pop();
            if (st.empty())
            {
                // last element
                last = k;
            }
            newSt.push(k);
        }

        while (!newSt.empty())
        {
            st.push(newSt.top());
            newSt.pop();
        }
        return last;
    }

    bool empty()
    {
        return st.empty();
    }
};
