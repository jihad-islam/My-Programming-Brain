#include <bits/stdc++.h>
using namespace std;

class Student // class create korlam. class holo user defined datatype.
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa) // class er constructor
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student fun() // user define function create korlam. but function er data type holo class. karon class holo user define datatype.
{
    Student rahim(33, 7, 4.33); // constructor use kore user define function er moddhe input dilam. ekahne rahim holo object.

    return rahim; // object or rahim ke return korlam.  normal variable jevabe return kora hoy etaw sherokom
}

int main()
{
    Student ans = fun(); // ekhane shobkichui print hobe, kono garbage value print hobe na. but static array return korle garbage value print hoito. karon array er address return er por user define function array ta memory theke muche dito. but user define function theke kono object ke return korle object er ekta copy main function er kache jabe, then object or rahim memory theke muche jabe. user define function e rahim er address and main function e rahim ke receive kora ans er address different hobe.

    cout << ans.roll << " " << ans.cls << " " << ans.gpa << endl;

    return 0;
}
