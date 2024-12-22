/*
    1. jehetu insert function head and tail e insert korte pare na. head and tail e insert korte chaile segmentation fault ashe. tai ekhane error correction korbo. error correction means jeno segmentation fault na ashe.
*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_at_position(Node *head, int position, int value)
{
    Node *newNode = new Node(value);
    Node *tmp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;     // 100->30
    tmp->next = newNode;           // 20->100
    newNode->next->prev = newNode; // 100<-30
    newNode->prev = tmp;           // 20<-100
}

int size(Node *head) // error correction er jonne ami linked list er size ber korbo. jodio ami ei code e linked list er size jani, but jokhon ami user er kach theke input nibo tokhon to r size janbo na. tokhon error correction er jonne ei size function use korte hobe.
{
    Node *tmp = head;
    int count = 0;

    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }

    return count;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    // connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    int position, value;
    cin >> position >> value;

    if (position >= size(head)) // suppose amar linked list er size 5. but ami node insert korte chai 15 no index e. tokhon invalid dekhabe. abar tail e insert korte chailew invalid dekhabe.
    {
        cout << "Invalid" << endl;
    }

    else
    {
        insert_at_position(head, position, value);
    }

    print_normal(head);
    print_reverse(tail);

    return 0;
}