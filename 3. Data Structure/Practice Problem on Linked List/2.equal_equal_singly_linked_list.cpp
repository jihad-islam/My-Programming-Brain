/*
    1. amake duita linked list input nite hobe then protita element check kore dekhte hobe same kina.
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

    // protita element check korar code
    int flag = true;

    if (size(head1) != size(head2))
    {
        cout << "NO";
        return 0;
    }

    else
    {
        Node *temp1 = head1;
        Node *temp2 = head2;

        while (temp1 != NULL)
        {
            if (temp1->value != temp2->value)
            {
                flag = false;
                break;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }

    if (flag == true)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
