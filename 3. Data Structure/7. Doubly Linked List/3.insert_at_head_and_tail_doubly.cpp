/*
    1. tail insertion er ekta jinish niye khubi pera khaisi. tail insertion ew head insert kora jay taile head insert korar jonne alada function er ki dorkar? tail e tokhoni head insert hoy jokhon linked list ta blank thake but amar kache already ekta existing linked list ase ami tar head e kono node insert korte chai tokhon amake head insertion function call korte hobe. existing linked list e ami tail insertion function diye head insert korte parbo na.
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

void print_normal(Node *head) // O(n)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail) // O(n)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_at_any_position(Node *head, int position, int value) // O(n)
{
    Node *newNode = new Node(value);
    Node *tmp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}

int size(Node *head) // O(n)
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

void insert_head(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value); // O(1)
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_tail(Node *&head, Node *&tail, int value) // O(1)
{
    Node *newNode = new Node(value);

    if (tail == NULL) // tail jodi NULL hoy tahole amake head e insert korte hobe. but question is jodi tail er maddhomei ami head e insert korte pari then amake ken head e insert korar jonne alada function likhte hobe?
    {
        head = newNode;
        tail = newNode;
        return;
    }

    // if condition par kore ashche means head NULL na that means tail ei insert korbo.
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
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

    if (position > size(head))
    {
        cout << "Invalid" << endl;
    }

    else if (position == 0) // position 0 means ami head e insert korte chaitesi. head e normal insert function diye insert kora jabe na. head e insert korar jonne alada function lagbe.
    {
        insert_head(head, tail, value); // amar ekhane aage thekei 4 size er node ase. then ami oi 4 size er node e head insert kortesi. ei function ta kono node na thaklew head insert korte pare. kono node nai means head e NULL ase.
    }

    else if (position == size(head)) // position size er shoman means tail e insert korte cacchi.
    {
        insert_tail(head, tail, value);
    }

    else
    {
        insert_at_any_position(head, position, value);
    }

    print_normal(head);
    print_reverse(tail);

    return 0;
}