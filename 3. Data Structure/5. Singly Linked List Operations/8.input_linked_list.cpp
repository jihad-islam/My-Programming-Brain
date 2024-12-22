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

void insert_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void print(Node *head)
{
    cout << endl;
    cout << "Your linked list: ";

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

int main()
{
    int value;
    Node *head = NULL;

    while (true)
    {
        int value;
        cin >> value;

        if (value == -1)
            break;

        insert_tail(head, value);
    }

    print(head);

    return 0;
}
