#include <iostream>
#include <cstring>

using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    char section;
    double marks;
    int cls;

    Student(const char *name, int roll, char section, double marks, int cls)
    {
        strncpy(this->name, name, sizeof(this->name) - 1);
        this->name[sizeof(this->name) - 1] = '\0'; // Ensure null-termination
        this->roll = roll;
        this->section = section;
        this->marks = marks;
        this->cls = cls;
    }
};

int main()
{
    Student a("Sakib", 5, 'S', 78, 10);
    Student b("Tamim", 12, 'S', 82, 10);
    Student c("Miraj", 2, 'S', 92.5, 10);

    cout << a.roll << endl;

    return 0;
}
