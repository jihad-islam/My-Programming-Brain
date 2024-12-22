/*
    1. ekta queue ke reverse kora lagbe. ekta queue ke onno ekta queue te copy korle same order e copy hoy. tai first e stack e copy korbo. then stack theke abar queue te copy korbo. taholei reverse queue pabo.
*/

#include <bits/stdc++.h>

queue<int> reverseQueue(queue<int> q)
{
    // Write your code here.

    stack<int> s;
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    return q;
}