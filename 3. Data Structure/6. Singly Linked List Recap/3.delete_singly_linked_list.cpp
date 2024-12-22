/*
    1. insert er shomoy amra sorasori tail insert korechilam. but singly linked list e tail sorasori delete kora jay na. loop chalaya delete korte hoy. tai singly linked list e tail delete er tc O(n).

    2. tail ke track rekhe tail insert kora hoyechilo. but tail ke track rekhe delete kora possible na. karon tail e track rakha hoy actually tail er immidiate previous node ke.
*/

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_linekd_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int size(Node *head)
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

void delete_any_node(Node *head, int position) // O(n)
{
    Node *tmp = head;

    for (int i = 0; i < position - 1; i++)
        tmp = tmp->next; // temp er moddhe a node ase

    Node *x = tmp->next;         // 30, suppose node b ke delete korbo. tai node b ke notun ekta node x er moddhe rakhlam
    tmp->next = tmp->next->next; // temp er moddhe jehetu b node ase. tai temp->next e c-node er address pabo. ami temp->next e d-node er address diye dilam.

    delete x;
}

void delete_head(Node *&head) // O(1)
{
    Node *x = head;
    head = head->next;
    delete x;
}

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

    print_linekd_list(head);
    int position;
    cin >> position;

    if (position >= size(head))
        cout << "Invalid" << endl;

    else if (position == 0)
        delete_head(head);

    else
    {
        delete_any_node(head, position);
    }
    print_linekd_list(head);

    return 0;
}