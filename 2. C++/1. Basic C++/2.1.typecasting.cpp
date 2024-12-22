#include <iostream>
using namespace std;

int main()
{
    char a;

    cin >> a;

    cout << int(a) << endl; // ekhane single word e somossa nai. but multiple word thakle bracket() dewa lagto. cout<< (long long)(a) << endl;
    // char theke int type casting e just ascii value ashbe.

    return 0;
}

/*
    1. typecasting use kore ja ja convert kora jay:
        i. long long to int (vise versa)
        ii. char to int (vise versa)
        iii. float/double to integer(vise versa)
*/