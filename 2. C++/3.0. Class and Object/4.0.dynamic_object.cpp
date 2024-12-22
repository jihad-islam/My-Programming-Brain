#include <bits/stdc++.h>
using namespace std;

class Student // class
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa) // constructor
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    // Student karim(33, 9, 4.78); // normal object create

    Student *karim = new Student(33, 9, 4.78); // dynamic object create

    cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;

    delete karim;

    return 0;
}

/*
    1. dynamic variable:    int *p= new int;
       dynamic object:      Student *karim = new Student(33, 9, 4.78);

    2. Student *karim = new Student(33, 9, 4.78);   ekhane- i. Student holo object(karim) er datatype or class.
                                                            ii. new Student(33, 9, 4.78); shudhu new Student likhlew hoito. but jehetu constructor
                                                                use korsi tai bracket e value ow dewa lagbe.
*/
