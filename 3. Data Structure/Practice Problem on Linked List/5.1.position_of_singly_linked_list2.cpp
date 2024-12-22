/*
    1. amake ekta value dibe oi value ta linked list er kototomo index e ase khuje ber korte hobe.
    2. aager code tle khaise. eta thik ase. duitari tc hishab kore dekha lagbe.
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

int main()
{
    int t;
    cin >> t;

    while (t--) // O(n)
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

        int x;
        cin >> x;

        int position = 0;
        bool flag = false;

        Node *temp = head;

        while (temp != NULL)
        {
            if (x == temp->value)
            {
                flag = true;
                break;
            }

            position++;
            temp = temp->next;
        }

        if (flag == true)
            cout << position << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
