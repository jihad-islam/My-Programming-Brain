#include <iostream>
using namespace std;

int main()
{
    char a;
    int n1, n2;

    cout << "enter an operator (+,-,*,/): ";
    cin >> a;

    cout << "enter two numbers: ";
    cin >> n1 >> n2;

    switch (a)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;

    case '-':
        cout << n1 - n2 << endl;
        break;

    case '*':
        cout << n1 * n2 << endl;
        break;

    case '/':
        cout << n1 / n2 << endl;
        break;

    default:
        cout << "wrong operator" << endl;
    }

    return 0;
}