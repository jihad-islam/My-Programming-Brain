#include <iostream>
using namespace std;

int main()
{
    int x = 6;
    switch (x) // ami x variable niye kaj korbo
    {
    case 1: // eta onekta if(x==1) er moto
        cout << "one" << endl;
        break;

    case 2:
        cout << "two" << endl;
        break;

    case 3:
        cout << "three" << endl;
        break;

    case 4:
        cout << "four" << endl;
        break;

    case 5:
        cout << "five" << endl;
        break;

    default: // kono case na mille default use kora hoy
        cout << "kichu mile nai" << endl;
    }

    return 0;
}

/*
    1. switch kind of if else er moto kaj kore.

    2. switch condition true howar ag porjonto kono kaj kore na. but ekbar condition true hole porer gula kaj korte thakbe.
       tai break use kora hoy. switch er dhormo take onek shomoy code e use kora lage.

    3. amar emon ekta code dorkar true na howa porjonto code execute korbe na. but true hole execute korte thakbe. eta if else diye
       kora jabe na. tokhon switch use korbo.

    4. break condition only loop and switch e kaj kore. if else condition e kaj kore na.

    5. switch usually equal(==) condition er jonne kaj kore. greater than, less than, etc er jonne kaj kore na.
*/