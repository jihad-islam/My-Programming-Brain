/*
    1. two pointers techniqu use kore doubly reverse kora hoy. ei two pointers technique aaro onk jaygay lagbe.
*/

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

void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail) // doubly ke reverse korar normal code. eitar kono kaj nai eikhane. just two pointers er sathe compare kore dekhbo.
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void reverse(Node *head, Node *tail) // two pointers
{
    Node *i = head; // i head theke shuru
    Node *j = tail; // j tail theke shuru

    while (i != j && i->next != j) // i==j and i->next = j hole loop off hoye jabe. odd er khetre i==j hoye jabe, then loop off kore dewa lagbe. same even er khetre i->next e j thakbe.
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val, j->val); // loop e ekta condition disi i->next == j hoile loop break korbe, taile to even nodes thakle majher duita swap hobe na. tai even nodes e majher duita swap korar jonne abaro swap() function call korlam. arekta bishoy holo, ekhane i and j jokhon ashbe loop er jonne i and j aage thekei even node er majh borabor obosthan korbe.
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    // connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;

    reverse(head, tail);

    print_normal(head);

    return 0;
}