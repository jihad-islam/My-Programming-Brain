/*
    1. phytron e jevabe bolse oivabe kori nai. er thekew easy way te kora jay kina find out kora lagbo. easy way means tc kom hoile aro better.

    2. porer tay List use kore korsi. but list e print hobe sorted obosthay. r etay unsorted print kora lagbe.
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

void removeDuplicate(Node *head) // O(n*n).
{
    Node *temp1 = head;

    while (temp1 != NULL && temp1->next != NULL)
    {
        Node *temp2 = temp1;

        while (temp2->next != NULL)
        {
            if (temp1->value == temp2->next->value)
            {
                Node *x = temp2->next;
                temp2->next = temp2->next->next;
                delete x;
            }

            else
                temp2 = temp2->next;
        }

        temp1 = temp1->next;
    }
}

void insert(Node *&head, Node *&tail, int value)
{
    Node *x = new Node(value);

    if (tail == NULL)
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

    removeDuplicate(head);
    print(head);

    return 0;
}
