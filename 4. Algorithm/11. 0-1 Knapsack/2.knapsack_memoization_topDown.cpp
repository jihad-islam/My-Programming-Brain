/*
    1. eta top down approach

    2. etar complexity O(n*w)
*/

#include <bits/stdc++.h>
using namespace std;

const int maxN = 1000;
const int maxW = 1000;

int dp[maxN][maxW];

int knapsack(int n, int weight[], int value[], int maxWeight)
{
    if (n == 0 || maxWeight == 0)
        return 0;

    if (dp[n][maxWeight] != -1)
        return dp[n][maxWeight];

    if (weight[n - 1] <= maxWeight)
    {
        // duita option
        // niye dekhbo, na niye dekhbo
        int op1 = knapsack(n - 1, weight, value, maxWeight - weight[n - 1]) + value[n - 1];
        int op2 = knapsack(n - 1, weight, value, maxWeight);

        return dp[n][maxWeight] = max(op1, op2);
    }

    else
    {
        // ekta option
        // na niyei dekhte hobe
        int op2 = knapsack(n - 1, weight, value, maxWeight);
        return dp[n][maxWeight] = op2;
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

    for (int i = 0; i <= n; i++) // dp array te shob -1 kore dilam
        for (int j = 0; j <= maxWeight; j++)
            dp[i][j] = -1;

    cout << knapsack(n, weight, value, maxWeight) << endl;

    return 0;
}