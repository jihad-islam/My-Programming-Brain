

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

int main() {
    // static node
    // Node head(10);

    // dynamic node
    Node* head = new Node(
        10);  // first node ke head bole. ekhane head and a holo duita pointer.
    Node* a = new Node(20);

    (*head).next = a;

    cout << (*head).value << endl;
    cout << (*a).value << endl << endl;

    cout << (*(*head).next).value
         << endl;  // arrow diyei korbo. arrow 3.1 e ase.

    return 0;
}
