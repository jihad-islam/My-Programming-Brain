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

    Node *temp = head;

    while (temp != NULL) // ekhn temp null e point kortese. head tar motoi ase.
    {
        cout << temp->value << endl;
        temp = temp->next; // ei logic er bekkha khatay khub shundor vabe dewa ase. first e bujhbo. then ei syntax mukhosto kore felbo.
    }

    cout << endl;

    // faw loop
    while (head != NULL) // ekhn head print hobe karon aager bar temp null e point korse. eta just prove korar jonne print kortesi. karon ei print er por head ow null e point hoye jabe.
    {
        cout << head->value << endl;
        head = head->next;
    }

    return 0;
}
