// linked list er maximum and minimum value er difference ber korte hobe.

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

void insert_tail(Node *&head, Node *&tail, int value)
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
    Node *head = NULL;
    Node *tail = NULL;
    int value;

    while (true) // O(n)
    {
        cin >> value;

        if (value == -1)
            break;

        insert_tail(head, tail, value);
    }

    Node *temp = head;
    int max = INT_MIN;
    int min = INT_MAX;

    while (temp != NULL)
    {
        if (max < temp->value)
            max = temp->value;

        if (min > temp->value)
            min = temp->value;

        temp = temp->next;
    }

    cout << max - min << endl;

    return 0;
}