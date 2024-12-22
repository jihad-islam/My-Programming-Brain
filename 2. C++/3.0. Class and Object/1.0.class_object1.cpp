#include <bits/stdc++.h>
using namespace std;

class Student
{
public:             // access modifier
    char name[100]; // name, roll, cgpa eigulake class er member variable bole. ei memeber variable gulo object er template hishebe kaj korbe.
    int roll;
    double cgpa;
};

int main()
{
    Student a; // ekhane Student holo class. and a holo class er variable that means object

    a.roll = 29; // evabe class er moddhe jei variable gula ase oi variable gula access korte hoy. object er por dot dile kon variable e access korte chai sheta dekhabe.
    a.cgpa = 3.95;

    char temp[100] = "Jihad"; // but string usual niyome input newa jay na. aage ami ekta variable declare kore string input nibo. then oi variable take class er variable e copy kore dibo.
    strcpy(a.name, temp);

    cout << a.name << " " << a.roll << " " << a.cgpa << endl;

    return 0;
}

/*
    1. ekhane Student holo ekta class er name. class er name usually capital letter e likha best practice.
    2. ekhane Student nam er class er size hobe, student class er moddhe jotogulo datatype newa hoise shobgulo datatype er size er jogfol + student nam er class er nijer size. jemon ekhane-
            i. char 1 byte. but newa hoise 100 character er string or array. tai etar size 100 bytes
            ii. int er size 4 bytes
            iii. double er size 8 bytes

        so total 112 bytes. sathe student class er nijossho size. ekek pc te class er jonne ekekrokom size store kroe. usually 4 or 8 bytes hoye thake.

    3.
*/
