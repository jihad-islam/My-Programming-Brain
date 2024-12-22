/*
    1. vector holo dynamic array er STL or tamplate. same list holo doubly linked list er STL or template.

    2. jehetu array and linked list onekta kachakachi tai vector and list er function gulow 90% same. dui ek jaygay parthokko ase.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> L1; // ami integer type er L1 nam e ekta list banailam. eita onekta int type er node bananor moto. ei list er size hocche 0.

    list<int> L2(10); // L2 list er size holo 10 and protita node e value 0 ase.

    list<int> L3(10, 5); // L3 list er size 10 and protita node e value 5 ase.

    list<int> L4 = {1, 2, 3, 4, 5}; // list e evabe value assign kore. it means ami 5 ta node create korsi and ei node gulote 1,2,3,4,5 value gulo ase.

    // iterator. not recommended. jokhon linked list er pointer lagbe just tokhon use korbo.
    for (auto it = L4.begin(); it != L4.end(); it++) // list er node gulo direct access kora jay na like vector. node guloke access korte hoile iterator use kore access korte hobe.
    {
        cout << *it << endl;
    }
    cout << endl;

    for (auto it = L4.rbegin(); it != L4.rend(); it++) // but reverse e print korte chaile iterator ei use kora lagbe. ranged based for loop diye reverse e print kora jay na.
    {
        cout << *it << endl;
    }
    cout << endl;

    /*
        1. ekhon kotha hoitese amra list e iterator use korbo na. iterator amake index dey na, just value dey. and linked list e amar index er kono kaj ow nai. just value pailei hobe. tai ranged based for loop(short cut for loop) use korbo. ranged based for loop ow amake just value dey, kono index dey na. iterator and ranged based for loop duitai amake just value dey, but ranged based for loop use kora beshi easy tai always list e value access er jonne ranged based for loop use korbo.

        2. ekhane arekta bishoy ase, vector and list onektai same but vector jehetu dynamic array niye kaj kore tai vector er khetre index lagte pare. tai vector e index proyojon hoile normal for loop chalaya value and index access korbo. but as linked list e amar index er kono kaj ei nai tai list e alway ranged based for loop use korbo.

        3. eikhanew ekta somossa ase. linked list e jodi kokhono pointer lage. takhon iterator use korte hobe. hard level er problem solve korte gele poiter lagte pare.
    */

    // ranged based for loop. recommended.
    for (int value : L4)
    {
        cout << value << endl;
    }

    return 0;
}