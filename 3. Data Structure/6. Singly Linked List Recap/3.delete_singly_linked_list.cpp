/*
    1.insertion er moto deletion o 3 jaygay kora jay:
        a. head theke delete
        b. jekono position theke delete
        c. tail theke delete


    2.insertion er shomoy tail ke track rekhe O(1) e insert kora jay. but deletion er khetre tail direct delete kora jay na.
    👉karon:
        amader kache tail er previous node er direct access thake na.
    👉tai:
        tail delete korte hole head theke loop chalaya "tail er aager node" e jete hoy.
    👉so:
        tail deletion er TC = O(n)


    3. time complexity (TC):
        - head deletion → O(1)
        - jekono position deletion → O(n)
        - tail deletion → O(n)


    4. deletion er main rules: 👉 kono node delete korte hole tar "previous node" lagbe
            Step 1: previous node (temp) e jete hobe
            Step 2: delete korte chaowa node ke alada pointer e store korte hobe
            Step 3: previous node er next update kore skip korte hobe
            Step 4: delete kore memory free korte hobe

    👉 shortcut:
    Node *x = temp->next
    temp->next = temp->next->next
    delete x


    5. 🔥 MOST IMPORTANT LOGIC:
            👉 temp always thakbe "je node ta delete korte chai tar aager node e"
            👉 temp->next holo "je node ta delete hobe"


    6. pointer connection logic:

    ধরি:
    10 → 20 → 30 → 40 → 50
    (30 delete korte chai)

    👉 temp → 20
    👉 temp->next → 30 (delete target)

    Step:

    1. x = temp->next  → x = 30
    2. temp->next = temp->next->next → 20 → 40
    3. delete x → 30 remove

    Final:
    10 → 20 → 40 → 50


    7. head deletion:

    👉 head delete korte previous node lage na

    Step:
    Node *x = head
    head = head->next
    delete x

    👉 TC = O(1)


    8. common mistake ⚠️:

    ❌ directly delete temp->next korle pointer hariye jete pare

    👉 tai ALWAYS:
    1. age node ke store koro (x)
    2. tarpor link change koro
    3. then delete koro


    9. edge cases:

    - position == 0 → head delete korte hobe
    - position >= size → invalid
    - last node delete → loop diye previous node e jete hobe


    10. visualization idea:

    👉 deletion mane:
    "previous node (temp) directly next er porer node e point korbe"
*/

#include <bits/stdc++.h>
using namespace std;
class Node {
   public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void print_linekd_list(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int size(Node* head) {
    Node* tmp = head;
    int count = 0;
    while (tmp != NULL) {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void delete_any_node(Node* head, int position)  // O(n)
{
    Node* tmp = head;

    for (int i = 0; i < position - 1; i++)
        tmp = tmp->next;  // jei node ke delete korbo tar aager node temp e ase.

    Node* x = tmp->next;          // temp->next holo targeted node. ekhon targated node new ekta node e rekhe dilam.
    tmp->next = tmp->next->next;  // temp->next->next holo targeted node er porer node. tai temp->next ke update kore temp->next->next e point kore dilam. tai targeted node skip hoye jabe.

    delete x;
}

void delete_head(Node*& head)  // O(1)
{
    Node* x = head;
    head = head->next;
    delete x;
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    head->next = a;

    a->next = b;
    b->next = c;
    c->next = d;

    print_linekd_list(head);
    int position;
    cin >> position;

    if (position >= size(head))
        cout << "Invalid" << endl;

    else if (position == 0)
        delete_head(head);

    else {
        delete_any_node(head, position);
    }
    print_linekd_list(head);

    return 0;
}