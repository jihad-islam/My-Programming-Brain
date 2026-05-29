#include <iostream>
using namespace std;

#define MAX 100  // Stack এর maximum capacity

class Stack {
    int topIndex;

   public:
    int arr[MAX];  // Stack এর ডেটা রাখার জন্য array

    // Constructor: ক্লাস কল হলেই topIndex -1 হয়ে যাবে
    Stack() {
        topIndex = -1;
    }

    // push operation
    void push(int x) {
        if (topIndex >= (MAX - 1)) {
            cout << "Stack Overflow! R jayga nai." << endl;
        } else {
            topIndex++;
            arr[topIndex] = x;
        }
    }

    // pop operation
    void pop() {
        if (topIndex < 0) {
            cout << "Stack Underflow! Stack ekhon khali." << endl;
        } else {
            topIndex--;
        }
    }

    // top operation
    int top() {
        if (topIndex < 0) {
            cout << "Stack is Empty" << endl;
            return -1;
        } else {
            return arr[topIndex];
        }
    }

    // empty check
    bool empty() {
        return (topIndex < 0);
    }
};

int main() {
    Stack st;  // Stack ক্লাসের অবজেক্ট তৈরি করলাম

    // কিছু ডেটা push করি
    st.push(10);
    st.push(20);
    st.push(30);

    // Stack থেকে ডেটা বের করে দেখি
    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}