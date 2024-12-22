#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;

    Person(string nm, int ag, int m1, int m2) // constractor. constructor and class er nam same hoy and constructor er kono return type thake na.
    {
        name = nm; // character array te direct string copy kora jaito na. strcpy() function use kortam. but string e direct copy kora jay.
        age = ag;
        marks1 = m1;
        marks2 = m2;
    }

    void hello() // hello nam e ekta function create korlam, jeta kichu return kore na. just HELLO print kore.
    {
        // cout << name << " " << age << endl;

        cout << "From hello function: "
             << "HELLO" << endl
             << endl;
    }

    void jihad() // ami chaile class er moddhe function use kore. oi class er under e jei variable ase oigularew access korte parbo.
    {
        cout << "From jihad function: " << name << " " << age << " " << endl
             << endl; // class er name and age ke print kortesi.
    }

    int total_marks()
    {
        return marks1 + marks2;
    }
};

int main()
{
    Person rakib("Rakib Ahsan", 24, 95, 85); // character array te constructor use kore input nile directly string input newa jeto na. but string e directly input newa jay.

    rakib.hello(); // kono class er function ke call korte object er maddhome call korte hoy. ami object er maddhome hello function ke call korsi.

    rakib.jihad(); // amake function call kora lagbe. function call na korle kono kichui print hobe na.

    cout << rakib.total_marks() << endl
         << endl; // amake total_marks() nam er function ta duita mark jog kore return dise oita print korlam.

    cout << rakib.name << " " << rakib.age << endl;

    return 0;
}