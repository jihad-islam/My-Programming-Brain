/*
    1. c te doshomiker por or aage koyghor dekhte chai ta format spacifier modify kore neya jay. but c++ eto format spacifier ei nai
       to modify korbo kemne. c++ e etar jonne setprecision use kora hoy.

    2. setprecision er jonne c++ e <iomanip> header file use kora hoy. iomanip means input output manipulation.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a;

    cin >> a;

    cout << fixed << setprecision(2) << a << endl; // eta setprecision likhar format. bracket e 2 dewa hoise karon doshomiker por dui ghor dekhte chai.

    return 0;
}