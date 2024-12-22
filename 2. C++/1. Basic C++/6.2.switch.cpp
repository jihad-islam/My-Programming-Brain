// even or odd using switch

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    switch (x % 2) // ekhane x pathaile case e condition dewa lagbe. but case e condition dewa jabe na. case e ami 0 or 1 pathabo
    {
    case 0:
        cout << "Even";
        break;

    case 1:
        cout << "Odd";
        break;
    }

    return 0;
}