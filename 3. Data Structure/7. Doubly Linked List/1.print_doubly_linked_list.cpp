#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next; // next pointer
    Node *prev; // previous pointer
    Node(int val)
    {
        this->val = val;
        this->next = NULL; // next pointer
        this->prev = NULL; // previous pointer
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

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b; // doubly linked list e back traverse kora jay. tai always tail ke track rakha hoy. singly linked list e tail ke track rakha hoito tc komanor jonne. doubly te back traverse korar jonne rakha hoy.

    // connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;

    print_normal(head);
    print_reverse(tail);

    return 0;
}