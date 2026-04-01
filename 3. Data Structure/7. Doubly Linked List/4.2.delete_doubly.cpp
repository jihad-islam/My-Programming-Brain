/*    
    1. time complexity (TC):
        - head delete → O(1)  
        - tail delete → O(1)  
        - any position delete → O(n)  


    2. deletion er main rules:
            Step 1: delete korte chaowa node identify koro  
            Step 2: previous node er next update koro  
            Step 3: next node er prev update koro  
            Step 4: node delete koro  

    👉 shortcut:
    prev->next = next  
    next->prev = prev  
    delete node  


    5. 🔥 MOST IMPORTANT LOGIC:

    👉 tmp always thakbe "delete position er aager node e"

    👉 tmp->next holo "je node ta delete hobe"


    6. any position deletion logic:

    ধরি:
    10 ⇄ 20 ⇄ 30 ⇄ 40  

    30 delete korte chai

    👉 tmp → 20  
    👉 deleteNode → 30  

    Step:

    1. deleteNode = tmp->next  
    2. tmp->next = tmp->next->next   → 20 → 40  
    3. tmp->next->prev = tmp         → 40 ← 20  
    4. delete deleteNode  

    Final:
    10 ⇄ 20 ⇄ 40  


    7. ⚠️ VERY IMPORTANT (order):

    👉 age link update korte hobe, tarpor delete korte hobe

    ❌ age delete korle pointer hariye jabe


    8. head deletion:

    👉 head delete korte previous node lage na

    Step:
    Node *deleteNode = head  
    head = head->next  
    delete deleteNode  

    👉 then:

    if (head == NULL)
    {
        tail = NULL   // list empty hoye gele tail o NULL korte hobe
    }
    else
    {
        head->prev = NULL
    }


    9. tail deletion:

    👉 doubly te tail er prev direct access kora jay

    Step:
    Node *deleteNode = tail  
    tail = tail->prev  
    delete deleteNode  

    👉 then:

    if (tail == NULL)
    {
        head = NULL
    }
    else
    {
        tail->next = NULL
    }


    10. edge cases (VERY IMPORTANT):

    - position >= size → invalid  
    - position == 0 → head delete  
    - position == size-1 → tail delete  


    11. common mistake ⚠️:

    ❌ next/prev update na korle list break hoye jabe

    ❌ delete korar age pointer save na korle node access harabe


    12. visualization idea:

    👉 deletion mane:
    "middle node ke bypass kora"

    before:
    A ⇄ B ⇄ C  

    after deleting B:
    A ⇄ C  


    13. final memory hack 🧠:

    👉 insertion:
    majhe dhukao (add)

    👉 deletion:
    majher node bypass koro (remove)

    👉 doubly:
    2 side update korte hobe (next + prev)
*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void delete_at_any_position(Node *head, int position) // O(n)
{
    Node *tmp = head;

    for (int i = 0; i < position - 1; i++) // jri position delete korbo. loop chalaya tar aag porjonto ashbo.
    {
        tmp = tmp->next;
    }

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;

    delete deleteNode;
}

void delete_tail(Node *&head, Node *&tail) // O(1). doubly te tail track rekhe sorasori delete kora jay. tai tc O(1). but singly te loop chalaya delete korte hoito tai singly te tc hoito O(n). tail delete er jonne singly theke doubly better complexity provide kore.
{
    Node *deleteNode = tail;

    tail = tail->prev;
    delete deleteNode;

    if (tail == NULL)
    {
        head = NULL;
        return;
    }

    tail->next = NULL;
}

void delete_head(Node *&head, Node *&tail) // O(1)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode; // ekhane head delete kore dilam

    if (head == NULL) // upore head delete kore disi. ekhn jodi linked list e ektai node thakto then head delete korar por linked list e r kono node thakbe na.  tai amake taile ke NULL kore dite hobe then retrun korbo. jodi eta na kortam tahole jokhon head->prev e NULL korte jaitam tokhon segmentation fault khaitam. karon head nijei NULL hoye ase, taile ami NULL er previous e NULL kemne dibo.
    {
        tail = NULL;
        return;
    }

    head->prev = NULL;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    // connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    int position;
    cin >> position;

    if (position >= size(head))
    {
        cout << "Invalid" << endl;
    }
    else if (position == 0)
    {
        delete_head(head, tail);
    }
    else if (position == size(head) - 1) // size(head)-1 means tail delete kortesi. karon size 4 hoile tar last index hobe 3.
    {
        delete_tail(head, tail);
    }
    else
    {
        delete_at_any_position(head, position); // head and tail chara jekono position delete.
    }

    print_normal(head);
    print_reverse(tail);
    return 0;
}