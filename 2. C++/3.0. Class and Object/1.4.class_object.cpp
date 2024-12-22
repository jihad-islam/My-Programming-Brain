// user theke multiple input nibo with space in string

#include <bits/stdc++.h>
using namespace std;

class Student // ekhane Student holo class er nam.
{
public: // access modifier
    char name[100];
    int roll;
    double cgpa;
};

int main()
{
    Student a, b;

    cin.getline(a.name, 100); // 1st getline
    cin >> a.roll >> a.cgpa;

    getchar(); // ekhane keno getchar() newa hoise eta bojha joruri. getline use kore string input newar shomoy ekta oshubidha ase. getline input newar aage and pore 'enter' input nite pare. to ami jokhon aager line er roll and cgpa input newar por enter click kori. tokhon 2nd getline ta oi enter ke string hishebe input niye ney. fole ami ultapalta value pabo. ei getchar() ta enter ke input hishebe niye enter ke fele dey.

    cin.getline(b.name, 100); // 2nd getline
    cin >> b.roll >> b.cgpa;

    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    cout << b.name << " " << b.roll << " " << b.cgpa << endl;

    return 0;
}

// 1.0 and 1.4 bujhlei enough.

/*
    1. access modifier 3 prokar hoy:
        i. public
        ii. private
        iii. protected
    amra C++ e only public niye kaj korbo. private and protected OOP te kaj korbo.
*/
