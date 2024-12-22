/*
    1. method definition and method declaration: full function likha holo definition, r just function declare kora holo declaration.

    2. inline method vs outline method: inline method holo class er moddhei full method likha or definition kora. and outline method holo class er moddhe declaration kore class er bahire definition kora.
*/

#include <bits/stdc++.h>
using namespace std;

class Calculator
{
public:
    int num1, num2, result, choice; // attributes

    // 3 ta method: options,input,calculation
    // method declaration
    void options();

    void input();

    void calculation();
};

void Calculator::options() // scope resulation operator(::)
{
    cout << "1 for addition" << endl;
    cout << "2 for subtraction" << endl;
    cout << "3 for multiplication" << endl;
    cout << "4 for division" << endl;
}

void Calculator::input()
{
    cout << "your choice: ";
    cin >> choice;

    cout << "two numbers: ";
    cin >> num1 >> num2;
}

void Calculator::calculation()
{
    if (choice == 1)
        cout << num1 + num2 << endl;

    else if (choice == 2)
        cout << num1 - num2 << endl;

    else if (choice == 3)
        cout << num1 * num2 << endl;

    else if (choice == 4)
        cout << num1 / num2 << endl;

    else
        cout << "invalid input" << endl;
}

int main()
{
    Calculator obj;

    obj.options();
    obj.input();
    obj.calculation();

    return 0;
}