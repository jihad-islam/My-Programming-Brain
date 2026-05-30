#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack // vitorer kaj gulo aage main function er moddhe ba main function er jonne kortam. but ekhn ekhn pop(), push(), top() nije banabo. tai shobkichu stack er class er moddhe korbo. then main function e jaya just call korbo.
{
public:
    Node *head = NULL;
    Node *tail = NULL; // jehetu input nibo. and doubly te input newar jonne tail track rakhai lage.

    int sz = 0; // stack er size ber korar jonne function use korle O(n) complexity hoye jabe. but evabe size track rakhle O(1) e size ber kora jabe.

    void push(int val) // tail e insert
    {
        sz++; // shurute size 0. jotobar push korbo size totobar 1 kore barbe.
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode; // ekahne head and tail update korsi, but reference kori nai karon head and tail same function er moddhei. ami onno function e pass kori nai.
            tail = newNode;
            return;
        }

        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }

    void pop() // tail delete
    {
        sz--; // etaw size track rakhar jonne. jotobar delete korbo 1 kore kombe.
        Node *deleteNode = tail;
        tail = tail->prev;

        if (tail == NULL) // eta corner case handle korse. ektu vabo.
        {
            head = NULL; // tail NULL hole head ke return kortese.
        }

        else
        {
            tail->next = NULL;
        }

        delete deleteNode;
    }

    int top() // amar tail tai hoilo top value. so, tail er value ta return korlei top paya jabo.
    {
        return tail->val;
    }

    int size() // doubly er to kono size nai. eita stack er size.
    {
        return sz; // size() funtion use kori nai. just track rakhsilam. oita return korsi.
    }

    bool empty() // stack empty check korar function
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myStack st;
    // st.pop();
    // cout << st.top() << endl;

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