#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // class and constructor er nam same hobe
    Student(int roll, int cls, double gpa) // jodi constructor and class er variable same nei tahole (*this). pointer use korte hobe.
    {
        this->roll = roll; // this pointer arrow diye use kora preferable. just this likhe dot diye variable likhle vs code e automatically arrow eshe jabe. dot diye acces kore and arrow diye dereference kore. arrow amra aaro onek jaygay use korbo. jekhanei arrow use korbo, shekhanei pointer bujhabe.
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    Student rahim(29, 45, 5.00); // constructor use kore value assign kora.
    Student karim(10, 5, 4.33);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}

/*
    1. this hocche class er built in pointer. ami jei class er moddhe this pointer use korbo, this oi class er variable kei point korbe.

    2. this pointer use korar karon hole ami constructor and class er variable same rakhsi. ami jodi this pointer use na kortam, tokhon main function theke input newar shomoy constructor confused hoye jeto ami kon variable er jonne input nitesi, eta constructor er variable naki class er variable.

    3. this pointer tokhoni use korbo jokhon class and constructor er variable same.

    4. constructor and class er variable same rakha prefferable. code bujhte shubidha hoy. so always this pointer use korbo.

    4. learning:
        i. normal input: Student Rahim;
                         Rahim.roll = 29;
                         Rahim.cgpa = 3.95;

        ii. input using constructor: Student Rahim(29, 3.95);
*/