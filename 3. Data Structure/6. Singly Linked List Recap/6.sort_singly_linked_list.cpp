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

void insert_tail(Node *&head, Node *&tail, int value) // tail tracking er maddhome input newa hoiteche tai tc = O(1)
{
    Node *x = new Node(value);
    if (head == NULL)
    {
        head = x;
        tail = x;
        return;
    }
    tail->next = x;
    tail = x;
}

void print_linekd_list(Node *head) // O(n)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL; // tail track

    int value;
    while (true) // tail track er maddhome value input nilam
    {
        cin >> value;
        if (value == -1)
            break;
        insert_tail(head, tail, value);
    }

    for (Node *i = head; i->next != NULL; i = i->next) // sorting. tc = O(n*n).
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value < j->value)
            {
                swap(i->value, j->value);
            }
        }
    }

    print_linekd_list(head);

    return 0;
}