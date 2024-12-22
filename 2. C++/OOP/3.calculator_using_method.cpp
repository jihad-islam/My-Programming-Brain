#include <bits/stdc++.h>
using namespace std;

class Calculator
{
public:
    int num1, num2, result, choice; // attributes

    // 3 ta method: options,input,calculation
    void options()
    {
        cout << "1 for addition" << endl;
        cout << "2 for subtraction" << endl;
        cout << "3 for multiplication" << endl;
        cout << "4 for division" << endl;
    }

    void input()
    {
        cout << "your choice: ";
        cin >> choice;

        cout << "two numbers: ";
        cin >> num1 >> num2;
    }

    void calculation()
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
};

int main()
{
    Calculator obj;

    /*
        main function theke method and attribute access korar niyom: i) obj.method();
                                                                     ii) obj.attribute;
    */
    obj.options();
    obj.input();
    obj.calculation();

    return 0;
}