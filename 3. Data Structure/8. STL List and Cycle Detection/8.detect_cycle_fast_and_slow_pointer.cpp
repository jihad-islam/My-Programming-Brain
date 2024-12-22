/*
    1. cycle detect korte jei technique use kora hoy oita holo fast and slow pointer or hare and tortoise algorithm.
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

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = a; // eta dilei cycle hoye jabe. c ghure abar a te ashbe. c->next=c dilew cycle hobe.

    Node *slow = head;
    Node *fast = head;

    bool flag = false;

    // while loop e tokhoni dhukbe jokhon linked list ta cycle hobe. condition emon vabei dewa hoise cycle na hole loop e dhukbe na. r cycle hoile fast and slow pointer ta ekshomoy na ekshomoy equal hobei. equal mean jekono node poroshpor milito hobe.
    while (fast != NULL && fast->next != NULL) // O(n) // suita condition fast and fast->next  NULL na howa porjonto loop cholbe. NULL hoye gelei loop terminate hoye jabe.
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow) // if er moddhe cycle detected print korlew hoito. but flag nisi karon unditected print korar jonne.
        {
            flag = true;
            break;
        }
    }

    if (flag == true)
        cout << "Cycle Detected" << endl;
    else
        cout << "No Cycle" << endl;
    return 0;
}