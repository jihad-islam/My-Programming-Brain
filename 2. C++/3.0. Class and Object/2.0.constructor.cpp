/*
    1. Constructor hocche class er ekta function. construtor er nam hoy class er nam onujayi. it means constructor and class er nam same hoy. and constructor kono value return kore na.

    2. constructor value return kore na but constructor e parameter pass hoy.
*/

#include <bits/stdc++.h>
using namespace std;

class Studend
{
public:
    int roll;
    int cls;
    double gpa;

    Studend(int r, int c, double g) // constructor function. constructor er variable and class er variable same hote parbe na.
    {
        roll = r;
        cls = c;
        gpa = g;
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