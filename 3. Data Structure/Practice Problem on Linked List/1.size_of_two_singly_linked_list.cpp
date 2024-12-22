/*
    1. duita linked list input nibo. jodi duita linked list er size same hoy tahole YES print korbo, same na hole NO print korbo
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

void insert(Node *&head, Node *&tail, int value)
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

int size(Node *head)
{
    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    int value;

    while (1)
    {
        cin >> value;
        if (value == -1)
            break;

        insert(head1, tail1, value);
    }

    while (1)
    {
        cin >> value;
        if (value == -1)
            break;

        insert(head2, tail2, value);
    }

    if (size(head1) == size(head2))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
