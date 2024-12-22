/*
    1. object vs attribute: an object is a specific instance(udahoron) of a class, and attributes are the properties that hold data specific to that object.
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
public: // access modifier
    char name[100];
    int roll;
    double cgpa;
    /* class er moddhe kono variable declare korle tader attribute bole. so name,roll,cgpa era holo attribute. */
};

int main()
{
    /* object likha hoy main function er moddhe. ekhane a holo Student class er object. */
    Student a;

    /* object er por dot(.) diye object er attribute gulare access korte hoy. */
    a.roll = 29;
    a.cgpa = 3.95;

    char temp[100] = "Jihad"; // string usual niyome input newa jay na. aage ami ekta variable declare kore string input nibo. then oi variable take class er variable e copy kore dibo.
    strcpy(a.name, temp);

    cout << a.name << " " << a.roll << " " << a.cgpa << endl;

    return 0;
}
