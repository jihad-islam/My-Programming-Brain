/*
    1. amake ascending order e sorted ekta linked list dibe. duplicate node gula delete korte hobe.
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
    Node *head = NULL;
    Node *tail = NULL;

    int value;

    // node insertion er loop
    while (1)
    {
        cin >> value;
        if (value == -1)
            break;

        insert(head, tail, value);
    }

    // duplicate node delete er code
    Node *temp = head;

    while (temp != NULL && temp->next != NULL) // ekhane while loop e duita condition ei dewa lagbe. ektu imagine koiro ken duitai lagbe. duita na dile segmentation fault khabo.
    {
        if (temp->value == temp->next->value) // ekhane porpor duita node check kortesi equal kina
        {
            // eituk node delete er logic
            Node *x = temp->next;
            temp->next = temp->next->next;

            delete x;
        }

        else
            temp = temp->next;
    }

    print(head);

    return 0;
}
