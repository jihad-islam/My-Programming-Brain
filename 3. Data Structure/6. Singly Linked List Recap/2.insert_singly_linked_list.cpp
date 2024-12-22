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

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert(Node *head, int position, int value) // insertion er tc holo O(n)
{
    Node *x = new Node(value);

    Node *temp = head;

    for (int i = 0; i < position - 1; i++) //  position er shoman loop choltese tai tc holo O(n).
        temp = temp->next;

    x->next = temp->next;
    temp->next = x;
}

// head insert
void head_insert(Node *&head, int value) // tc= O(1)
{
    Node *x = new Node(value);
    x->next = head;
    head = x;
}

// tail insert. tail ke track rakhar maddhome tail ke insert kora  hoice. aager bar onno vabe insert kora hoyechilo.
void tail_insert(Node *&head, Node *&tail, int value) // jehetu vitore kono loop choltese na. tai tc =O(1).
{
    Node *x = new Node(value);

    if (head == NULL) // linked list blank thakle node ta head e insert hobe.
    {
        head = x;
        tail = x;
        return;
    }

    tail->next = x;
    tail = x;
}

void print(Node *head) // O(n)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

// linked list er size ber korbo.
int size(Node *head) // tc O(n).
{
    Node *temp = head;
    int count = 0;

    while (temp != NULL) // null na pawa porjonto loop choltese tai tc O(n).
    {
        count++;
        temp = temp->next;
    }

    return count;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d; // last node tai tail. tai tail e 'd' node ke rekhe dilam. eta holo tail ke track rakha.

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print(head);
    cout << endl
         << "Tail: " << tail->value << endl;

    int position, value;
    cin >> position >> value;

    if (position > size(head)) // eta error handle er jonne use korlam. linked list er size holo 5. but ami 15 no index e value insert korte chai tokhon invalid show korbe.
        cout << "Invalid Position" << endl;

    else if (position == 0)
        head_insert(head, value);

    else if (position == size(head))
        tail_insert(head, tail, value);

    else
        insert(head, position, value);

    print(head);

    cout << endl
         << "Tail: " << tail->value << endl;

    return 0;
}
