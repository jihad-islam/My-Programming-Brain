#include <bits/stdc++.h>
using namespace std;

class Studend
{
public:
    int roll;
    int cls;
    double gpa;

    Studend(int roll, int cls, double gpa) //jodi constructor and class er variable same nei tahole (*this). pointer use korte hobe.
    {
        (*this).roll = roll;
        (*this).cls = cls;
        (*this).gpa = gpa;
    }
};

int main()
{
    Studend rahim(29, 45, 5.00); // constructor use kore value assign kora.
    Studend karim(10, 5, 4.33);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}

/*
    1. this hocche class er built in pointer. ami jei class er moddhe this pointer use korbo, this oi class er variable kei point korbe.

    2. this pointer use korar karon hole ami constructor and class er variable same rakhsi. ami jodi this pointer use na kortam, tokhon main function theke input newar shomoy constructor confused hoye jeto ami kon variable er jonne input nitesi, eta constructor er variable naki class er variable.
*/