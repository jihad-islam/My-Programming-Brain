// ekta number input nibo then number tay jotogulo digit ase tar sum ber korbo

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cin >> number;

    int sum = 0;
    int originalNumber = number;

    while (number != 0)
    {
        sum += number % 10;
        number /= 10;
    }

    cout << sum << endl;

    return 0;
}
