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
    Student *karim = new Student(33, 7, 4.33); // creationg object and giving input using constructor

    return karim;
}

int main()
{
    Student *ans = fun();

    // cout << ans.roll << " " << ans.cls << " " << ans.gpa << endl;

    cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl;

    delete ans;

    return 0;
}
