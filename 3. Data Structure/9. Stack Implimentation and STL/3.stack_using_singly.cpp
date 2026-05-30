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

class myStack {
   public:
    Node* head = NULL;
    int sz = 0;

    void push(int val)  // head e insert
    {
        sz++;

        Node* newNode = new Node(val);

        newNode->next = head;
        head = newNode;
    }

    void pop()  // head delete
    {
        if (head == NULL)
            return;

        sz--;

        Node* deleteNode = head;
        head = head->next;

        delete deleteNode;
    }

    int top() {
        return head->val;
    }

    int size() {
        return sz;
    }

    bool empty() {
        return sz == 0;
    }
};

int main() {
    myStack st;

    int n;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}