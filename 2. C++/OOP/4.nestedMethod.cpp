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

    /*
        1. ekhane ekta function er moddhe onno function gulare call korsi etai nested methods.

        2. ekta importand bishoy holo. ekhane kintu obj.method(); evabe call kori nai. evabe shudu main() function er moddhe call korte hoy.
    */
    void call()
    {
        options();
        input();
        calculation();
    }
};

int main()
{
    Calculator obj;

    /*
        main function theke method and attribute access korar niyom: i) obj.method();
                                                                     ii) obj.attribute;
    */
    obj.call();

    return 0;
}