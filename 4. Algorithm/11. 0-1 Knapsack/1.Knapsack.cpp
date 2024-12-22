/*
    1. target holo profit(value) maximize kora.

4
2 3 4 5
1 3 5 3
8

size
weight array
value array(profit)
maximum weight
*/

#include <bits/stdc++.h>
using namespace std;

int knapsack(int n, int weight[], int value[], int maxWeight)
{
    if (n == 0 or maxWeight == 0)
        return 0;

    /*
        ekahne 2 ta condition.
            1. bag e jayga ase: bag e jayga thakle niye and na niye duitai dekhte hobe.
            2. bag e jayga nai: bag e jayga na thakle to r newa jabe na, tokhon na niye dekhte hobe.
    */
    if (weight[n - 1] <= maxWeight) //  bag e jayga thakar conditon
    {
        // duita option
        // niye dekhbo, na niye dekhbo

        int op1 = knapsack(n - 1, weight, value, maxWeight - weight[n - 1]) + value[n - 1];

        int op2 = knapsack(n - 1, weight, value, maxWeight);

        return max(op1, op2);
    }

    else
    {
        // ekta option
        // na niyei dekhte hobe
        int op2 = knapsack(n - 1, weight, value, maxWeight);
        return op2;
    }
}

int main()
{
    int n;
    cin >> n;

    int weight[n], value[n];

    for (int i = 0; i < n; i++)
        cin >> weight[i];

    for (int i = 0; i < n; i++)
        cin >> value[i];

    int maxWeight;
    cin >> maxWeight;

    cout << knapsack(n, weight, value, maxWeight) << endl;

    return 0;
}