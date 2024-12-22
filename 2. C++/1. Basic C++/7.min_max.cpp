#include <iostream>
#include <algorithm> // min,max er jonne <algorithm> header file use kora hoy.

using namespace std;

int main()
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int x = min({a, b, c, d}); // jodi only duita variable er moddhe compare kortam tahole curly braces dewa lagto na. only parenthesis ditam.
    int y = max({a, b, c, d});

    cout << x << " " << y << endl;

    return 0;
}