#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_at_position(Node *head, int position, int value)
{
    Node *newNode = new Node(value);
    Node *tmp = head;

    for (int i = 0; i < position - 1; i++) // jei node e insert korbo loop chalaya tar aager node e jabo.
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next; // jei dui node er majhe insert korte chai, newNode er next e oi dui node er 2nd node ke insert korlam.
    tmp->next = newNode;       // ekhn first node er next e newNode insert korlam.

    newNode->next->prev = newNode;
    newNode->prev = tmp;
}

int main()
{
    // ami eikhane total 4 ta node nisi. jar position 0,1,2,3.
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c; // tail track

    // connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    int position, value;

    cin >> position >> value; // jehetu 4 ta node nisi tai position 0 theke 3 er moddhe nibo.

    insert_at_position(head, position, value); // head and tail e insert kora jay na. head and tail e insert korte gele segmentation fault ashbe.
    /*
        1. ei insert function e ektu jhamela ase. ei insert function head e insert korte pare na. 0 index holo head er position. ami jodi 0 index(head) e kono value insert korte chai ei function 0 index e kono value insert korbe na. tai head e insert korar jonne amake alada function likhte hobe.

        2. ei insert function e arekta jhamela ase. ami ekhane 4 ta node nisi. position holo 0 to 3. tail e insert kora mane bujhay ami 4 no index e ekta node insert korbo. singly linked list e ei insert function diyei tail e insert kora jeto. but doubly te ei insert function diye tail ew insert kora jay na. ekta jinish vul buijho na, ekhane tail kintu 3 no index ei, but tail insert kora mane bujhaitesi 4 no index e node insert korbo.

        3. ekhon question hocche keno ami singly te same function diye tail e insert korte parlew doubly te keno parbo na? basic bujhle eitar answer peye jaba. khatay reason ta likha ase. but nije imagination korar try koro. main reason holo NULL er previous access kora jay na. singly te only  next chilo, previous chilo na.
    */

    print_normal(head);
    print_reverse(tail);

    return 0;
}