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

void insert_tail(Node *&head, Node *&tail, int value)
{
    Node *x = new Node(value);

    if (tail == NULL)
    {
        head = x;
        tail = x;
        return;
    }

    tail->next = x;
    x->prev = tail;
    tail = x;
}

bool traverse(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;

    while (i != j && i->next != j)
    {
        if (i->val != j->val || i->next->val != j->prev->val) // 2nd condition ta odd list er jonne dewa hoise. just ektu vablei bujhe jabo.
        {
            return false;
        }

        i = i->next;
        j = j->prev;
    }

    return true;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int value;

    while (1)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_tail(head, tail, value);
    }

    if (traverse(head, tail))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
