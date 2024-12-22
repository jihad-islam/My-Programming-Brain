#include <iostream>
using namespace std;

int main()
{
    int a, b;

    while (cin >> a >> b) // c++ e evabe EOF newa hoy.
    {
        cout << a << " " << b << endl;
    }

    return 0;
}

/*
    1. c te EOF: while( scanf("%d %d",&a, &b) != EOF )
                 {
                    code;
                 }
*/