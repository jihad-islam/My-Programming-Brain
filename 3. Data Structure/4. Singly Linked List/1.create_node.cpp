/*
    1. node hocche ekta value and pointer er group. normally ekta value and pointer eksathe rakha jay na. tai class use kore node create kora hoy.

    2. starting node ke head bole.
*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

int main()
{
    Node a, b;

    a.value = 10;
    b.value = 20;

    a.next = &b;
    b.next = NULL;

    cout << a.value << " " << b.value << endl;

    cout << (*a.next).value << endl;
    cout << a.next->value << endl;

    return 0;
}
