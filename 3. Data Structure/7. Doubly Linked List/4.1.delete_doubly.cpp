// delete any node, head and tail.

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

int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void delete_at_any_position(Node *head, int position) // O(n)
{
    Node *tmp = head;

    for (int i = 0; i < position - 1; i++) // jri position delete korbo. loop chalaya tar aag porjonto ashbo.
    {
        tmp = tmp->next;
    }

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;

    delete deleteNode;
}

void delete_tail(Node *&head, Node *&tail) // O(1). doubly te tail track rekhe sorasori delete kora jay. tai tc O(1). but singly te loop chalaya delete korte hoito tai singly te tc hoito O(n). tail delete er jonne singly theke doubly better complexity provide kore.
{
    Node *deleteNode = tail;

    tail = tail->prev;
    delete deleteNode;

    if (tail == NULL)
    {
        head = NULL;
        return;
    }

    tail->next = NULL;
}

void delete_head(Node *&head, Node *&tail) // O(1)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;

    if (head == NULL)
    {
        tail = NULL;
        return;
    }

    head->prev = NULL;
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

    int position;
    cin >> position;

    if (position >= size(head))
    {
        cout << "Invalid" << endl;
    }
    else if (position == 0)
    {
        delete_head(head, tail);
    }
    else if (position == size(head) - 1) // size(head)-1 means tail delete kortesi. karon size 4 hoile tar last index hobe 3.
    {
        delete_tail(head, tail);
    }
    else
    {
        delete_at_any_position(head, position); // head and tail chara jekono position delete.
    }

    print_normal(head);
    print_reverse(tail);
    return 0;
}