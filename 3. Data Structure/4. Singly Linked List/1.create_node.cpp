/*
    1. node hocche ekta value and pointer er group. normally ekta value and
   pointer eksathe rakha jay na. tai class use kore node create kora hoy.

    2. starting node ke head bole.

    3. ekta node e oi node er value and next node er address thake.
*/

#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
    int value;
    Node* address; // address er variable type(int,float) holo node.
};

int main() {
    Node a, b;

    a.value = 10;
    a.address = &b; // b node er address rakhlam

    b.value = 20;    
    b.address = NULL;

    cout << a.value << " " << b.value << endl;

    cout << (*a.address).value << endl;
    cout << a.address->value << endl;

    return 0;
}
