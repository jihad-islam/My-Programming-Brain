/*
    1. ei code e must name ek line e input and others input onno line e nite hobe.

    2. name e space thakle oi line e r kichu input newa jabe na. karon onno value gularew nam hisebe count kore felbe.
    2. ekhane constructor use na korei input nisi. constructor use korew input newa jeto. but lengthy hoto. object er array use korle normally constructor use na korai valo.
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n; // array of object er size

    Student a[n]; // array of object

    // main code
    for (int i = 0; i < n; i++) // input loop. testcase porjonto loop chalabo.
    {
        cin.ignore(); // protibar nam input newar aage trail space ke ignore korbo

        getline(cin, a[i].name); // a[i] likhe dot dile element gualy access kora jabe.

        cin >> a[i].roll >> a[i].marks; // roll and marks input nilam
    }

    for (int i = 0; i < n; i++) // output loop
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}