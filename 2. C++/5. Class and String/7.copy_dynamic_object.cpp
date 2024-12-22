#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{
    Person *rakib = new Person("Rakib Ahsan", 25);  // 1st dynamic object
    Person *sakib = new Person("Sakib Ahamed", 23); // 2nd dynamic object

    // ami 2nd dynamic object ke 1st dynamic object e copy korbo

    // rakib = sakib; // evabe copy kora jabe na. sakib er ta rakib e copy hoy jabe, but problem ase. sakib and rahib duita alada alada dynamic object, tai duitai vinno heap meamory ke poin kore. but ami jodi evabe direct likhi tahole sakib jei address ke point kortese oi address ke baad diye rakib er address ke point korbe. that means rakib er address ke rakib and sakib duijon point korbe. ekn ami to sakib er value rakib e copy korte chai, rakib ke thik rakhte chai. but evabe copy korle sakib ke delete korle rakib ow delete hoye jabe. that's the main problem. jekono ekta delete korle duitai delete hoye jabe.

    // rakib->name = sakib->name; // eita right approch copy korar, but evabe korle onek time lagbe. karon ami ekta ekta variable dhore copy kortesi.
    // rakib->age = sakib->age;

    *rakib = *sakib; // evabe always copy korbo. evabe copy korle sakib er address er value rakib e copy hoye jabe. but duijoni alada alada address ke copy korbe. evabe copy korle sakib ke delete korlew rakib er value pawa jabe.

    delete sakib;

    cout << rakib->name << " " << rakib->age << endl;

    return 0;
}