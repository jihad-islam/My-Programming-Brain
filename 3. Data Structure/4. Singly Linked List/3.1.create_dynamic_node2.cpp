#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

int main()
{
    // Node head(10); // static node

    // dynamic node
    Node *head = new Node(10); // first node ke head bole. ekhane head and a holo duita pointer.
    Node *a = new Node(20);

    (*head).next = a;

    // cout << (*head).value << endl;
    // cout << (*a).value << endl;
    // cout << (*(*head).next).value << endl;

    cout << head->value << endl;
    cout << a->value << endl;
    cout << head->next->value << endl;

    return 0;
}
