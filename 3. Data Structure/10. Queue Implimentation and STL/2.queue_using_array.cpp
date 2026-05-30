/*
    1. stack e just topIndex(stack er topIndex and queue er rearIndex same) variable newa hoy. but queue te frontIndex and rearIndex duita variable newa hoy keno?
       
        - stack e array er last position ei value insert kora hoy and last position thekei value remove kora hoy. tai just last position ta track rakhlei hoy.
  
        - but queue te value insert hoy last index e and remove hoy first index theke. tai first and last duita position track rakhte hoy.
*/
#include <bits/stdc++.h>
using namespace std;

#define MAX 100

class Queue {
   private:
    int arr[MAX];
    int frontIndex;
    int rearIndex;

   public:
    // Constructor. Object create হলেই Queue empty থাকবে
    Queue() {
        frontIndex = -1;
        rearIndex = -1;
    }

    // enqueue operation
    void enqueue(int x) {
        if (rearIndex >= MAX - 1) {
            cout << "Queue Overflow! Queue full." << endl;
            return;
        }

        // প্রথম element insert হলে
        if (frontIndex == -1) {
            frontIndex = 0;
        }

        rearIndex++;
        arr[rearIndex] = x;
    }

    // dequeue operation: array first index er element remove
    void dequeue() {
        if (empty()) {
            cout << "Queue Underflow! Queue empty." << endl;
            return;
        }

        // Queue তে একটাই element থাকলে
        if (frontIndex == rearIndex) {
            frontIndex = -1;
            rearIndex = -1;
        } else {
            frontIndex++;
        }
    }

    // front operation
    // Queue এর front element return করবে
    int front() {
        if (empty()) {
            cout << "Queue is Empty." << endl;
            return -1;
        }

        return arr[frontIndex];
    }

    // size operation
    // Queue এ কয়টা element আছে return করবে
    int size() {
        if (empty()) {
            return 0;
        }

        return rearIndex - frontIndex + 1;
    }

    // empty operation
    // Queue empty কিনা check করবে
    bool empty() {
        return frontIndex == -1;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Current Front: " << q.front() << endl;
    cout << "Current Size: " << q.size() << endl;

    cout << "\nQueue Elements:" << endl;

    while (!q.empty()) {
        cout << q.front() << endl;
        q.dequeue();
    }

    return 0;
}