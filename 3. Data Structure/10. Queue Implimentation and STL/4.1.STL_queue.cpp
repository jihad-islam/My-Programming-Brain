/*
    queue er basic operation:
        1. push: element add kora hoy queue te.
        2. pop: element remove kora hoy queue theke.
        3. front: queue er first element ta return kore.
        4. back: queue er last element ta return kore.
        5. size: queue te koyta element ache ta return kore.
        6. empty: queue khali kina ta check kore.
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