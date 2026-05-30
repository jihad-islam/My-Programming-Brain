/*
1. Stack আলাদা কোনো concrete data structure না, এটা একটা abstract data structure (concept) যা LIFO (Last In First Out) principle follow করে। Stack সাধারণত array, vector বা list (Python), etc datastructure দিয়ে implement করা হয়।

2. stack er operations gulo holo:
        1. push(x): stack er top e x add kore.
        2. pop(): stack er top element ta remove kore.
        3. top(): stack er top element ta return kore.
        4. empty(): stack khali kina check kore.
        5. size(): stack er size return kore.

3. Stack and Queue khubi easy ekta topic. eta mainly 3 vabe implement kora jay:
    a. using array:
        - concept clear hoy. fe or government job e eta diye implement korbo.
        - advantage: Simple। Core concept পরিষ্কার বোঝা যায়। Debug সহজ। Size আগে জানা থাকলে perfect।
        - disadvantage: Size fixed থাকে। Memory waste হতে পারে। Stack overflow এর সম্ভাবনা থাকে।

    b. singly linked list:
        - concept clear hoy. fe or government job e eta diye implement korbo.
        - advantage: Dynamic size — runtime এ grow করে। Fixed size লাগে না। Memory efficient।
        - disadvantage: Pointer manage করতে হয়। Array এর চেয়ে একটু জটিল। Extra pointer per node।

    c. stl: project, cp and real life e stl use kora hoy.

note:
    - doubly diye stack and queue implement kora hoy na. doubly te memory waste hoy. Dequeue te doubly use kora hoy.
    - phitron e array er poriborte vector diye shikhaise. vector itself a stl. so vector diye na shiklew hobe.


4. stack to onek vabe implement kora jay. question holo ami konta diye shikhbo? amake 3 tai shekha lagbe. but shurute stl ta dekhbo. karon eta shobcheye easy. stl dekhe concept ta clear korbo. then exam e details er jonne aray dekhbo. and limitation overcome er jonne linked list dekhobo. but linked list pore, jokhon dorkar porbe tokhon dekhbo.

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;

    // push
    st.push(10);
    st.push(20);
    st.push(30);

    // size
    cout << "Size: " << st.size() << endl;

    // top
    if (!st.empty())
        cout << "Top: " << st.top() << endl;

    // pop
    if (!st.empty())
        st.pop();

    // top after pop
    if (!st.empty())
        cout << "Top after pop: " << st.top() << endl;

    // empty
    if (st.empty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    return 0;
}