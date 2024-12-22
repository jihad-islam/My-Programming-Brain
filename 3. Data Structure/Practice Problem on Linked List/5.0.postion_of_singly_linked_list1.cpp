/*
    1. amake ekta value dibe oi value ta linked list er kototomo index e ase khuje ber korte hobe.
    2. ei code tle khaise. tc ta hishab kora lagbe.
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

int position(Node *head, int n)
{
    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        if (temp->value == n)
        {
            return count;
        }
        count++;
        temp = temp->next;
    }
    return -1;
}

int main()
{
    int p;
    cin >> p;

    while (p--) // O(n)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int value;

        while (1) // O(n)
        {
            cin >> value;
            if (value == -1)
                break;

            insert(head, tail, value);
        }

        int n;
        cin >> n;
        int a = position(head, n);
        cout << a << endl;
    }

    return 0;
}
