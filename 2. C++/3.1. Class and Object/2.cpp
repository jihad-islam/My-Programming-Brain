/*
    learning: 1. jotobar object create korbo totobar constructor call hobe
              2. ekhane 2 ta object ase. so print korle duibar duibar "Default constructor called" likha dekhbo
              3. dynamic object e syntax ei constructor call hoy. but static object e syntax e object call hoy na. syntax e object call hok ba na hok object create hole constructor call hobei.
              4. another learning, default constructor class er moddhe emnitei hidden obosthay thake. ami jodi default constructor comment out kore rakhi erporew object create korle code run korbe. karon object hidden constructor ke call kore nibe.
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    int age;
    char name[100];

    Student() // default constructor
    {
        cout << "Default constructor called" << endl;
    }
};

int main()
{
    Student *sakib = new Student(); // dynamic object create korlam

    Student tamim; // static object create korlam

    return 0;
}
