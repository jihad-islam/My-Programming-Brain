// sort function use kore marks onujayi descending or ascending order e sort.

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student a, Student b) // cmp function er return type hobe boolean. cmp() bracket er moddhe ami jei duita object compare korte chai oi duita object ke pass korte hobe. ekhane minimum duita object ke pass korbo. 2 er beshi kora jabe, but 2 tar kom na.
{

    // ei if, else holo basic,
    // if (a.marks >= b.marks) // descending order sort according to marks
    //     return true;

    // else
    //     return false;

    // ei if, else er part tuku shortcut e kora jay. always ei shortcut tai use korbo but if, else ta holo basic. so basic ta jana lagbe.
    return a.marks >= b.marks; // jodi amar condition mile jay tahole true retrun korbe, amar conditionna mille false return korbe. ei condition ta likhar ekta technique holo ami ja chai tai condition e likhe dibo, ami chai boro theke choto print korte tai boro theke choto er condition likhlam.
}

int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a, a + n, cmp); // sort function call korlam and sort function er moddhe cmp function call korlam. cmp function ta true or false return pabe. true paile sort korbe, flase paile sort korbe na.

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}

/*
    1. usually sort function likha hoy: sort(a,a+n) diye, jekhane 'a' holo kono array or string er first element and 'a+n' holo last element. but ekhane amra object er array sort korbo. tai evabe sort functio likhar por sort function er vitore arekta function declare kora lagbe. jei funtion ta sort function ke bole dibe je eta object and object er jonne sort koro. and sort function er moddhe jei function ta call korbo otar return type hobe boolean.
*/