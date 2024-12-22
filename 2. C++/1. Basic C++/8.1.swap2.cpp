#include <iostream>
#include <algorithm>
#include <utility> // swap er jonne <utility> header file use kora hoy.
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    swap(a, b); // ekhane swap er jonne library function use korsi. ei library function er basic 8.0 te dekhano ase.

    cout << a << " " << b << endl;

    return 0;
}