/*
    1. queue use kore stack implementation korbo. that means, stack er function gulo queue er upor apply korbo but kaj korbe stack er moto.
*/

class MyStack
{
public:
    MyStack() // jevabe code korsi ekhane MyStack er kono kaj nai. leetcode e dise tai hudai rekhe disi.
    {
    }

    queue<int> q; // ekta queue declare korlam

    void push(int x) // stack and queue both e push() tail e insert kore.
    {
        q.push(x);
    }

    int pop() // delete korar jonne pop() use kora hoy. stack e tail pop hoy but queue te head pop hoy. pop() use kore amake tail delete kora lagbe.
    {
        queue<int> newQ; // notun ekta queue declare korlam, jekhane main queue ke copy kore rakhbo.
        int last;

        while (!q.empty()) // main queue empty  na howa porjonto main queue theke value ber hote thakbe.
        {
            int k = q.front(); // front() head ke return dey. oi head ke ami variable 'k' te rakhlam.

            q.pop(); // pop() head ke delete kore. so, front() use kore ami head ke store korlam then pop() use kore head ke delete kore dilam.

            if (q.empty())
            {
                // last element
                last = k;
                break;
            }
            newQ.push(k);
        }
        q = newQ;
        return last;
    }

    int top() // top hocche stack er function. eta stack er tail output dey. but queue te tail access kora jay na.
    {
        queue<int> newQ;
        int last;
        while (!q.empty())
        {
            int k = q.front();
            q.pop();
            if (q.empty())
            {
                // last element
                last = k;
            }
            newQ.push(k);
        }
        q = newQ;
        return last;
    }

    bool empty()
    {
        return q.empty();
    }
};
