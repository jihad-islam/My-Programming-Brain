#include <bits/stdc++.h>
using namespace std;

#define MAX 100  // Stack এর maximum capacity

class Stack {
   private:
    int topIndex;  // Stack এর top element এর index
    int arr[MAX];  // Stack এর data store করার জন্য array

   public:
    // Constructor
    // Object create হলেই stack empty থাকবে
    Stack() {
        topIndex = -1;
    }

    // push operation
    // Stack এর top এ নতুন element insert করবে
    void push(int x) {
        if (topIndex >= MAX - 1) {
            cout << "Stack Overflow! Stack full." << endl;
            return;
        }

        topIndex++;
        arr[topIndex] = x;
    }

    // pop operation
    // Stack এর top element remove করবে
    void pop() {
        if (topIndex < 0) {
            cout << "Stack Underflow! Stack empty." << endl;
            return;
        }

        topIndex--;
    }

    // top operation
    // Stack এর top element return করবে
    int top() {
        if (topIndex < 0) {
            cout << "Stack is Empty." << endl;
            return -1;
        }

        return arr[topIndex];
    }

    // size operation
    // Stack এ কয়টা element আছে return করবে
    int size() {
        return topIndex + 1;
    }

    // empty operation
    // Stack empty কিনা check করবে
    bool empty() {
        return topIndex < 0;
    }
};

int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Current Top: " << st.top() << endl;
    cout << "Current Size: " << st.size() << endl;

    cout << "\nStack Elements:" << endl;

    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}