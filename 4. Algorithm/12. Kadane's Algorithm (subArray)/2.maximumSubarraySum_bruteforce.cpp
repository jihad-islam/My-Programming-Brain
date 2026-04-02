/*
    1. approach type:

    eta brute force approach
    (ager code er subarray concept use kore max sum ber kora hocche)


    2. main idea:

    👉 protita subarray er sum ber kora
    👉 tar moddhe maximum ta rakhbo

    👉 optimization:
    ager moto 3rd loop use kori nai
    currentSum diye running sum maintain kortesi


    3. working logic:

    for (start = 0 → n-1)
        currentSum = 0

        for (end = start → n-1)
            currentSum += arr[end]   // subarray sum build hocche
            maxSum = max(maxSum, currentSum)


    4. time complexity (TC):

    👉 O(n^2)

    - outer loop → n
    - inner loop → n

    👉 previous code chilo O(n^3)
    ekhon ekta loop komano hoise


    5. limitation (IMPORTANT):

    👉 ekhaneo shob subarray check korte hocche

    👉 n boro hole slow hoye jabe


    6. keno Kadane’s Algorithm dorkar?

    👉 brute force e:
    protita start theke abar sum calculate korte hoy

    👉 redundant calculation hocche

    👉 tai:
    aro optimized approach dorkar
    jeta ekbar traverse kore max sum ber korte parbe


    7. final memory hack:

    👉 brute force:
    "shob subarray check koro → max nao"

    👉 TC = O(n^2)
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    int maxSum = INT_MIN;

    for (int start = 0; start < n; start++) {
        int currentSum = 0;

        for (int end = start; end < n; end++) {
            currentSum += arr[end];
            maxSum = max(maxSum, currentSum);
        }
    }

    cout << "max subarray sum: " << maxSum << endl;
    return 0;
}