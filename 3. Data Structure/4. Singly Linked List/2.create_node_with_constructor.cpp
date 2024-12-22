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

    Node(int value)
    {
        this->value = value;
        this->next = NULL; // by default protita node er address null thakbe.
    }
};

int main()
{
    Node a(10);
    Node b(20);

    a.next = &b;

    cout << a.value << " " << b.value << endl;

    cout << (*a.next).value << endl;
    cout << a.next->value << endl;

    return 0;
}
