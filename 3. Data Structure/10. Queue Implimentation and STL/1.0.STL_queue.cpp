/*
    1. Queue কি?
    Queue হলো একটি linear data structure যেখানে element গুলো first in first out (FIFO) order এ store হয়।
    অর্থাৎ, যে element প্রথমে queue তে ঢুকবে (enqueue), সেই element প্রথমে বের হবে (dequeue)।

    example: line এ দাঁড়ানো মানুষদের queue
    Enqueue:
        A
        B
        C
    Queue:
        A <- Front
        B
        C <- Rear
    Dequeue করলে:
        A আগে বের হবে।

    2. queue er basic operation:
        - push: element add kora hoy queue te.
        - pop: element remove kora hoy queue theke.
        - front: queue er first element ta return kore.
        - back: queue er last element ta return kore.
        - size: queue te koyta element ache ta return kore.
        - empty: queue khali kina ta check kore.

    3. queue er first element ke front bola hoy, ar last element ke back bola hoy. enqueue operation e new element back e add hoy, ar dequeue operation e front theke element remove hoy.


    4. table of operations:     10 20 30 40 50 here 10 = head/front and 50 = tail/back/top

|----------------------------|-----------|-----------------------------|
| Operation                  | Stack     | Queue                       |
| -------------------------- | --------- | --------------------------- |
| নতুন element insert করা     | `push()`  | `enqueue()` / STL: `push()` |
| Head-এর element দেখা        | `-`       | `front()`                   |
| Tail-এর element দেখা        | `top()`   | `back()`                    |
| Tail-এর element remove করা | `pop()`   | `-`                         |
| Head-এর element remove করা | `-`       | `dequeue()` / STL: `pop()`  |
| কয়টা element আছে দেখা       | `size()`  | `size()`                    |
| Empty কিনা check করা        | `empty()` | `empty()`                   |
|----------------------------|-----------|-----------------------------|


note:
    - queue to element insert korake enqueue bole and element remove korake dequeue bole. but stl e push and pop function diye likha hoy.

    - stack holo lifo, tai array er first index(head) directly remove kora jay na. last index(tail or top) theke remove kore kore ashte hoy. etar operation holo pop.

    - queue holo FIFO, tai array er first index(head/front) theke element remove kora hoy. last index(tail/back) theke element remove kora jay na. etar operation holo dequeue().

    - that means,
        pop(dequeue): stack e array er last element remove kore. and queue e array er first element remove kore.
        push(enqueue): stack and queue both e array er last index e element add kore.
        array er last index er element dekha: stack e top() and queue e back().

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    // push
    q.push(10);
    q.push(20);
    q.push(30);

    // size
    cout << "Size: " << q.size() << endl;

    // front
    if (!q.empty())
        cout << "Front: " << q.front() << endl;

    // back
    if (!q.empty())
        cout << "Back: " << q.back() << endl;

    // pop
    if (!q.empty())
        q.pop();

    // front after pop
    if (!q.empty())
        cout << "Front after pop: " << q.front() << endl;

    // back after pop
    if (!q.empty())
        cout << "Back after pop: " << q.back() << endl;

    // empty
    if (q.empty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    return 0;
}