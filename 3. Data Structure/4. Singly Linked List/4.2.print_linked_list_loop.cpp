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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    while (head != NULL) // evabe loop chalanor problem hocche head ta null e chole jabe. pore head niye kaj korte chaile null show korbe. tai kokhonoi head ke move korano jabe na. head er address notun arekta pointer e rakhe oi pointer niye kaj kori.
    {
        cout << head->value << endl;
        head = head->next; // ekhane barbar head ke update kore next node ke head banano hocche. but head ke move korano jabe na. so head always head er motoi thakbe. amra head er address ke temp e rekhe then temp ke move koraya jekono node er value pabo.
    }

    while (head != NULL) // ekhn ami abaro head print korbo. but kichui print hobe na. karon head null e point kore ase.
    {
        cout << head->value << endl;
        head = head->next;
    }

    return 0;
}

/*

*/