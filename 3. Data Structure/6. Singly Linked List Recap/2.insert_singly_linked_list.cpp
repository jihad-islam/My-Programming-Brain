/*
    1. tail insertion vs head insertion: tail insertion diye head insert kora
   jay ONLY jokhon linked list blank (head
   == NULL). but jodi already ekta existing linked list thake, tokhon tail
   insertion diye head e insert kora jabe na. tai: head e insert korte hole
   alada head_insert() function lagbe.


    2. insertion 3 ta jaygay kora jay:
        a. head e insertion
        b. jekono position e insertion
        c. tail e insertion


    3. time complexity (TC):
        - head insertion → O(1) (direct head change hoy)
        - tail insertion → O(1) (tail track kora thakle)
        - jekono position e insertion → O(n) (loop chalay position e jawa lage)


    4. insertion er main rules:
        a. jei node insert korbo, age oi node create korte hobe
        b. new node er next e, oi position er current node er address dite hobe
        (newNode->next = temp->next)
        c. previous node er next e new node er address dite
        hobe (temp->next = newNode)

    5. position concept: linked list e array er moto index thake na. head theke
    kotobar next korte hobe, oi hishebe position dhora hoy.


    6. 🔥 important logic:
            👉 temp always thakbe "insert position er aager node e"
            👉 temp->next always thakbe "jeikhane insert hobe oi current node"

    7. common mistake:
        ❌ age temp->next = new node dile, porer node er address hariye jabe
        👉 tai ALWAYS:
            1. newNode->next set koro
            2. tarpor temp->next update koro

    8. edge cases:
        - position == 0 → head insertion call korte hobe
        - position == size → tail insertion call korte hobe
        - position > size → invalid
*/

#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
    int value;
    Node* next;

    Node(int value) {
        this->value = value;
        this->next = NULL;
    }
};

// insertion at any position. tc O(n).
void insert(Node* head, int position, int value) {
    // 1. new node create kora holo.
    Node* x = new Node(value);

    Node* temp = head;

    // temp(head) ke oi position e point korlam jekhane new node insert korte
    // chai. position er shoman loop choltese tai tc holo O(n).
    for (int i = 0; i < position - 1; i++) temp = temp->next;

    x->next = temp->next;  // 2. new node er next e 'new node er porer node er address rekhe dilam.
    temp->next = x;        // 3. new node er aager node er next e new node er address rekhe dilam.
}

// head insert
void head_insert(Node*& head, int value)  // tc= O(1)
{
    Node* x = new Node(value);
    x->next = head;
    head = x;
}

// tail insert. tail ke track rakhar maddhome tail ke insert kora  hoice. aager bar onno vabe insert kora hoyechilo.
void tail_insert(
    Node*& head, Node*& tail,
    int value)  // jehetu vitore kono loop choltese na. tai tc =O(1).
{
    Node* x = new Node(value);

    if (head == NULL)  // linked list blank thakle node ta head e insert hobe.
    {
        head = x;
        tail = x;
        return;
    }

    tail->next = x;
    tail = x;
}

void print(Node* head)  // O(n)
{
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

// linked list er size ber korbo.
int size(Node* head)  // tc O(n).
{
    Node* temp = head;
    int count = 0;

    while (temp != NULL)  // null na pawa porjonto loop choltese tai tc O(n).
    {
        count++;
        temp = temp->next;
    }

    return count;
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* tail = d;  // last node tai tail. tai tail e 'd' node ke rekhe dilam.
                     // eta holo tail ke track rakha.

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print(head);
    cout << endl
         << "Tail: " << tail->value << endl;

    int position, value;
    cin >> position >> value;

    if (position >
        size(head))  // eta error handle er jonne use korlam. linked list er
                     // size holo 5. but ami 15 no index e value insert korte
                     // chai tokhon invalid show korbe.
        cout << "Invalid Position" << endl;

    else if (position == 0)
        head_insert(head, value);

    else if (position == size(head))
        tail_insert(head, tail, value);

    else
        insert(head, position, value);

    print(head);

    cout << endl
         << "Tail: " << tail->value << endl;

    return 0;
}
