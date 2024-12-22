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

void insert_tail(Node *&head, int value) // reference of a pointer
{
    Node *newNode = new Node(value); // jeit value ta input nisi oi value er ekta dynamic node create korlam

    if (head == NULL)
    {
        head = newNode; // reference na korle ekta pointer equal arekta pointer sorasori likhte partam na
        return;         // return na korle infinite loop e chole jabe
    }

    Node *temp = head;

    while (temp->next != NULL) // ei loop er maddhome temp->next NULL e pouchabe
    {
        temp = temp->next;
    }

    temp->next = newNode; // temp->next NULL e point kore ase. NULL er jaygay ami newNode point kore dibo.
}

void print(Node *head)
{
    cout << "Your linked list: ";

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

    while (true)
    {
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Print Linked List" << endl;

        int option;
        cin >> option;

        if (option == 1)
        {
            cout << "Enter your value which you want to insert: ";
            int value;
            cin >> value;
            insert_tail(head, value);
        }

        else if (option == 2)
        {
            print(head);
            break;
        }
    }

    return 0;
}
