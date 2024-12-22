// eta ekta vul code. output garbage ashbe. amake just reason ta bujhte hobe ken garbage ashbe.
// 4.1 e solve dewa ase

#include <bits/stdc++.h>
using namespace std;

class Student // class
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa) // constractor
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student *fun() // user defined function
{
    Student rahim(33, 7, 4.33); // creationg object using constructor

    Student *p = &rahim;

    return p;
}

int main()
{
    Student *ans = fun();

    // cout << ans.roll << " " << ans.cls << " " << ans.gpa << endl;

    cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl;

    return 0;
}
