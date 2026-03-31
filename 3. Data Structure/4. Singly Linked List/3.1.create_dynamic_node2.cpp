/*
    Linked List এ dynamic node ব্যবহার করার মূল কারণ হলো memory behavior। C++ এ
   memory দুই ধরনের জায়গায় allocate হয়: **stack** এবং **heap**। Stack হলো
   temporary memory (function call এর সময় ব্যবহার হয়), এখানে তৈরি হওয়া
   variable/function এর ভিতরের node function শেষ হলেই automatically delete হয়ে
   যায়, তাই এগুলো পরে আর use করা যায় না (dangling pointer problem হয়)। অন্যদিকে
   Heap হলো permanent/dynamic memory, যেখানে `new` দিয়ে allocate করলে data
   function শেষ হলেও থাকে, যতক্ষণ না manually `delete` করা হয়। Linked List এ node
   গুলোকে survive করতে হয় (কারণ একটার সাথে আরেকটা linked থাকে), তাই যদি stack এ
   node বানাও তাহলে function শেষ হলেই node হারিয়ে যাবে ❌, কিন্তু heap এ dynamic
   allocation করলে node থেকে যায় এবং safely access করা যায় ✅। তাই Linked List এ
   সবসময় `new` ব্যবহার করে dynamic node create করা হয়।

*/

#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
    int value;
    Node* address;

    Node(int value) {
        this->value = value;
        this->address = NULL;
    }
};

int main() {
    // static node
    // Node head(10);

    // dynamic node. ekhane 2 ta node ase: head and 'a'. both are pointer.
    // dynamic node gula pointer hishebe thake.
    Node* head = new Node(10);
    Node* a = new Node(20);

    head->address = a;

    cout << head->value << endl;           // 10
    cout << a->value << endl;              // 20
    cout << head->address->value << endl;  // 20

    return 0;
}
