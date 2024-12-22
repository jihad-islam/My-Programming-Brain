// user theke space soho string input nibo. 1.4 bujhle eta pani vat.

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};

int main()
{
    Student a;

    cin.getline(a.name, 100); // space soho string input evabe nibo. but ekta jinish kheyal rakha lagbe name input newar por enter e click kore then roll and cgpa nite hobe. enter na diye jodi space dei tahole roll, cgpa kew string hishebe input niye nibe. enter click korar maddhe program bujhbe amar string input newa sesh.

    cin >> a.roll >> a.cgpa;

    cout << a.name << " " << a.roll << " " << a.cgpa << endl;

    return 0;
}
