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

        cout << "Inserted at head" << endl
             << endl;

        return; // return na korle infinite loop e chole jabe
    }

    Node *temp = head;

    while (temp->next != NULL) // ei loop er maddhome temp->next NULL e pouchabe
    {
        temp = temp->next;
    }

    temp->next = newNode; // temp->next NULL e point kore ase. NULL er jaygay ami newNode point kore dibo.

    cout << "Inserted at tail" << endl
         << endl;
}

void insert_any_position(Node *head, int position, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;

    for (int i = 0; i < position - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    cout << "Inserted at position " << position << endl
         << endl;
}

void insert_head(Node *&head, int value)
{
    Node *newNode = new Node(value);

    newNode->next = head;
    head = newNode;

    cout << endl
         << "Inserted at head" << endl
         << endl;
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

void delete_any_position(Node *head, int position)
{
    Node *temp = head;

    for (int i = 0; i < position - 1; i++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;

    delete deleteNode;

    cout << endl
         << "Deleted position " << position << endl;
}

void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;

    cout << endl
         << "Deleted head" << endl;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Insert at any position" << endl;
        cout << "Option 3: Insert at head" << endl;
        cout << "Option 4: Print Linked List" << endl;
        cout << "Option 5: Delete from any position" << endl;
        cout << "Option 6: Delete head" << endl;
        cout << "Option 7: Terminate" << endl;

        int option;
        cin >> option;

        if (option == 1)
        {
            cout << "Enter the value which you want to insert: ";
            int value;
            cin >> value;
            insert_tail(head, value);
        }

        else if (option == 2)
        {
            int position, value;
            cout << "Enter the position: ";
            cin >> position;
            cout << "Enter the value which you want to insert: ";
            cin >> value;

            if (position == 0)
            {
                insert_head(head, value);
            }

            else
            {
                insert_any_position(head, position, value);
            }
        }

        else if (option == 3)
        {
            int value;
            cout << "Enter value: ";
            cin >> value;

            insert_head(head, value);
        }
        else if (option == 4)
        {
            print(head);
        }

        else if (option == 5)
        {
            int position;
            cout << "Enter the position: ";
            cin >> position;

            if (position == 0)
            {
                delete_head(head);
            }

            else
            {
                delete_any_position(head, position);
            }
        }

        else if (option == 6)
        {
            delete_head(head);
        }

        else if (option == 7)
        {
            break;
        }
    }

    return 0;
}
