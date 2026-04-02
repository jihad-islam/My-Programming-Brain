/*
    1. Kadane’s Algorithm maximum subarray sum O(n) time e ber kore


    2. main idea:

    👉 jodi kono running sum(current sum) negative hoy,
    tahole seta future e kono subarray er jonno useful na

    👉 tai:
    negative sum ke reset kore 0 kora hoy


    3. core logic:

    currentSum += arr[i]

    maxSum = max(maxSum, currentSum)

    if (currentSum < 0)
        currentSum = 0


    4. 🔥 intuition (MOST IMPORTANT):

    👉 negative sum carry korle future sum kombe

    👉 tai:
    "negative prefix bad diye notun kore start koro"


    5. working process (example + dry run):

    arr = [3, -4, 5, 4, -1, 7, -8]

    initial:
    currentSum = 0
    maxSum = -∞

    --------------------------------------------------
    i = 0 → 3

    currentSum = 0 + 3 = 3
    maxSum = max(-∞, 3) = 3

    --------------------------------------------------
    i = 1 → -4

    currentSum = 3 - 4 = -1
    maxSum = max(3, -1) = 3

    currentSum < 0 → reset → 0

    --------------------------------------------------
    i = 2 → 5

    currentSum = 0 + 5 = 5
    maxSum = max(3, 5) = 5

    --------------------------------------------------
    i = 3 → 4

    currentSum = 5 + 4 = 9
    maxSum = max(5, 9) = 9

    --------------------------------------------------
    i = 4 → -1

    currentSum = 9 - 1 = 8
    maxSum = max(9, 8) = 9

    --------------------------------------------------
    i = 5 → 7

    currentSum = 8 + 7 = 15
    maxSum = max(9, 15) = 15

    --------------------------------------------------
    i = 6 → -8

    currentSum = 15 - 8 = 7
    maxSum = max(15, 7) = 15

    --------------------------------------------------

    final answer:
    maxSum = 15

    (subarray: [5, 4, -1, 7])


    6. time complexity (TC):

    👉 O(n)

    👉 single loop e solve


    7. space complexity:

    👉 O(1)


    8. edge case (VERY IMPORTANT):

    👉 jodi puro array negative hoy:

    example:
    [-3, -2, -5]

    👉 tokhon:
    currentSum reset holeo
    maxSum e maximum negative value thakbe

    👉 tai code thik kaj kore


    9. brute force vs Kadane:

    brute force:
    - shob subarray check kore
    - TC = O(n^2)

    Kadane:
    - ekbar traverse kore
    - TC = O(n)


    10. visualization idea:

    👉 positive hole add korte thako  
    👉 negative hole reset kore new start  


    11. final memory hack:

    👉 "negative sum = useless → reset"

    👉 Kadane = running sum + reset logic
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};

    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];

        maxSum = max(maxSum, currentSum);

        if (currentSum < 0) { // eta corner case er jonne last e dewa hoise. etar mian kaj holo sum jodi negative hoye jay then reset kore 0 dewa. but given full array ei jodi negative hoy tokhon to eta kaj korbe. karon maxSum e oi negative value ta save korai thakbe. 
            currentSum = 0;
        }
    }
    cout << "max subarray sum: " << maxSum << endl;
    return 0;
}