/*
    1. normally linked list input nite complexity hoy O(n*n). but ei khane jevabe dekhano hoise eivabe input nite tc hoy O(n).

    2. ekhane tail track kore input newa hoise
*/

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

void insert_tail(Node *&head, Node *&tail, int value) // O(1) . ei function er tc O(1). but ami ei function ta ke loop er moddhe call kortesi. n times value input nile n times function ta call kortesi. tai ei function er tc O(1) hoilew. ei function use kore jokhon input nei tokhon total tc O(n) hoye jay.
{
    Node *x = new Node(value);

    if (head == NULL)
    {
        head = x;
        tail = x;
        return;
    }

    tail->next = x;
    tail = x;
}

void print_linekd_list(Node *head) // O(n)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL; // tail track korlam
    int value;

    while (true) // O(n)
    {
        cin >> value;

        if (value == -1) // ami jotokhon na input e -1 dibo totokhon loop cholbe
            break;

        insert_tail(head, tail, value); // function call kortese protibar. and ei function er tc holo O(1).
    }

    print_linekd_list(head);

    return 0;
}