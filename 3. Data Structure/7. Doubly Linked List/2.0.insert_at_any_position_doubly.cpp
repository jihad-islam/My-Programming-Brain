/*
    1. doubly linked list basic concept:

    doubly linked list e protita node er 2 ta pointer thake:

    👉 next → porer node ke point kore  
    👉 prev → aager node ke point kore  

    👉 tai:
    samne (forward) + pichone (reverse) duidikei traverse kora jay  


    2. traversal:

    - normal traversal → head theke next diye  
    - reverse traversal → tail theke prev diye  


    3. insertion 3 jaygay kora jay:

    a. head e insertion  
    b. jekono position e insertion  
    c. tail e insertion  


    4. time complexity (TC):

    - head insertion → O(1)  
    - tail insertion → O(1) (tail track thakle)  
    - jekono position → O(n)  


    5. insertion er main rules (doubly):

    👉 singly er moto 2 ta na, ekhane 4 ta connection update korte hoy

    Step 1: new node create  
    Step 2: newNode->next set  
    Step 3: newNode->prev set  
    Step 4: surrounding node gulor pointer update  

    👉 shortcut (middle insertion):

    newNode->next = temp->next  
    temp->next = newNode  
    newNode->next->prev = newNode  
    newNode->prev = temp  


    6. 🔥 MOST IMPORTANT LOGIC:

    👉 temp always thakbe "insert position er aager node e"

    👉 temp->next holo "jeikhane insert hobe oi current node"


    7. pointer connection logic (VERY IMPORTANT):

    ধরি:
    10 ⇄ 20 ⇄ 30 ⇄ 40  

    30 er age insert korbo 100

    👉 temp → 20  
    👉 temp->next → 30  

    Step:

    1. newNode->next = temp->next   → 100 → 30  
    2. temp->next = newNode         → 20 → 100  
    3. newNode->next->prev = newNode → 30 ← 100  
    4. newNode->prev = temp          → 100 ← 20  

    Final:
    10 ⇄ 20 ⇄ 100 ⇄ 30 ⇄ 40  


    8. ⚠️ common mistake:

    ❌ shob pointer update na korle list break hoye jabe

    👉 MUST update:
    - next link  
    - prev link  

    👉 order maintain korte hobe


    9. edge cases (VERY IMPORTANT):

    👉 ei function e 2 ta problem ase:

    - position == 0 → head insertion possible na  
    - position == size → tail insertion possible na  

    👉 karon:
    - head er prev nai  
    - tail er next NULL → tar prev access korte gele problem hobe  


    10. keno singly te same function diye tail insert kora jeto but doubly te jay na?

    👉 singly te:
    only next pointer chilo → NULL handle easy

    👉 doubly te:
    newNode->next = NULL holeo  
    newNode->next->prev korte gele crash (segmentation fault)

    👉 main reason:
    NULL er prev access kora jay na ❌  


    11. visualization idea:

    👉 insertion mane:
    "duita node er majhe new node bosano + 4 ta pointer update kora"

    👉 singly te 2 ta link change  
    👉 doubly te 4 ta link change 🔥
*/
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