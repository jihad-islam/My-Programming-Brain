#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name; // this pointer ei name ke point kore
    int age;     // this pointer ei age ke point kore

    Person(string name, int age)
    {
        this->name = name; // this->name string name; ke point kore.
        this->age = age;
    }

    void hello()
    {
        cout << "Hello" << endl;
    }
};

int main()
{
    Person rakib("Rakib Ahsan", 24);
    cout << rakib.name << " " << rakib.age << endl;
    return 0;
}