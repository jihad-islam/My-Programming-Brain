// eita easy problem. just +,-,*, etc operator kivabe input ney ekbar chokh bulabo.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char op1, op2;

    cin >> a >> op1 >> b >> op2 >> c;

    int ans;

    if (op1 == '+' && op2 == '=')
        ans = a + b;

    else if (op1 == '-' && op2 == '=')
        ans = a - b;

    else if (op1 == '*' && op2 == '=')
        ans = a * b;

    if (ans == c)
        cout << "Yes";

    else
        cout << ans;

    return 0;
}
