/*
    1. normally loop chalayai linked list print kora jay but recursion use korbo reverse e linked list print korar jonne.
    2. array ulta dike iteration kora jay but linked list ulta dike iteration kora jay na. tai array loop chalayaw reverse e print kora jay. but linked list jehetu ulta dike iteration kora jay na tai linked list reverse e print korte hole recursion use korte hobe.
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

void print_recursion(Node *head)
{
    // base case
    if (head == NULL)
        return;

    print_recursion(head->next); // recursion call korlam
    cout << head->val << " ";    // eita upore dile serially print hobe and niche dile reverse e print hobe.
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

    print_recursion(head); // function call korlam

    return 0;
}