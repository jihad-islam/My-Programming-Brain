// learning: ekta class use kore hajar ta object banano jay

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    int age;
    char name[100];
};

int main()
{
    Student sakib; // sakib holo object.
    sakib.id = 5796;
    sakib.age = 23;

    Student tamim; // tamim holo another object.
    tamim.id = 5331;
    tamim.age = 24;

    cout << sakib.id << " " << sakib.age << endl;
    cout << tamim.id << " " << tamim.age << endl;

    return 0;
}
