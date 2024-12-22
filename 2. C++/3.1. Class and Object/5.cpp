/*
    learning:
        1. concept of deallocation. deallocation and delete is not same.
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    int age;
    char name[100];

    // Student() // default constructor
    // {
    //     cout << "Default constructor called" << endl;
    // }
};

int main()
{
    Student *sakib = new Student();
    sakib->id = 5796;
    sakib->age = 23;
    strcpy(sakib->name, "Sakib Al Hasan");

    cout << sakib->id << " " << sakib->age << " " << sakib->name << endl;

    delete sakib; // deallocation

    cout << sakib->id << " " << sakib->age << " " << sakib->name << endl; // ekhane dynamic memory delete korar por abar print korsi. garbage value dekhabe. ekhane ekta concept ase, sheta holo, amra actually dynamic memory delete kori na. deallocation kori. deallocation means memory tar malikana poriborton hoy. shurute memory tate shudhu matro sakib access korte parto, but deallocation korar por memory tate computer er onno program ow access korte pare. and garbage value rekhe dey. onekshomoy computer er onno program gulo memory access korte deri kore. tai deallocation korar porew majhe majhe right ans dekhaite pare.

    return 0;
}
