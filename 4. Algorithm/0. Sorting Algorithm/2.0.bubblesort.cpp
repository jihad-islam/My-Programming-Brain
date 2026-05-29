/*
1. bubble sort concept (fe exam er note khatay details ase): bubble sort ekta comparison-based sorting algorithm.
    👉 pasapasi 2 ta element compare kora hoy, emon na je prothom element ke fixed dhore array er baki shob element chekc kora hoy. eta kora hoy selection sort e.
    👉 left element boro hole swap kora hoy, boro na hole swap kora hoy na. evabe shobcheye boro element ta last e chole jay.
    👉 animation link: https://www.youtube.com/watch?v=9I2oOAr2okY


2. keno "bubble" sort bola hoy?
    👉 protita iteration e largest element ta bubble er moto vese vese last e chole jay

    example: [5, 3, 4, 1]

    1st iteration er por: [3, 4, 1, 5]
    👉 5 last e chole gelo


3. basic bubble sort working process:

    ধরি:
    [5, 1, 4, 2]

    -------------------
    Iteration 1:

    5 > 1 → swap
    [1,5,4,2]

    5 > 4 → swap
    [1,4,5,2]

    5 > 2 → swap
    [1,4,2,5]

    👉 largest element (5) last e gelo

    -------------------
    Iteration 2:

    1 > 4 → no swap

    4 > 2 → swap
    [1,2,4,5]

    👉 2nd largest (4) fixed

    -------------------
    Iteration 3:

    1 > 2 → no swap

    sorted array:
    [1,2,4,5]


4. loop breakdown (IMPORTANT):

outer loop:
    for (int i = 0; i < n - 1; i++)
    👉 koyta iteration cholbe seta control kore
    👉 n element er array te maximum n-1 iteration lage(eta mukhosto, note khatay likha ase). tai loop n-1 er kom porjonto chalano hoise.

inner loop:
    for (int j = 0; j < n - 1 - i; j++)
    👉 adjacent element compare kore
    👉 n-1-i use kora hoy karon: protita iteration er por last er element sorted hoye jay tai abar oi part e jawa lage na
    👉 n-1-i er explanation: 1st iteration e shobcheye boro element ta last e chole jay. 2nd iteration e 2nd largest element sorted hoye jay. so 2 number iteration e last 2 ta element check korar proyojon nai. so jei koyta iteration oi koyta last er diker element check korar dorkar nai. and iteration number bujhbo i er value diye. tai n-1-i kora hoy.


5. swap condition:
    if (arr[j] > arr[j + 1])
    👉 left element boro hole swap hobe
    👉 ascending order maintain hocche


6. optimized bubble sort: basic bubble sort e array already sorted holeo shob iteration cholto
    👉 optimized version e: ekta swapped variable use kora hoy: bool swapped = false
    👉 jodi kono swap hoy: swapped = true
    👉 iteration sheshe jodi swapped false thake, mane array already sorted
    👉 tokhon early break kora hoy
    - bishoy ta bujsto to? prothom iteration e kono swap na hole that means array already kintu sorted. so 2nd itaration er r loop na chalaya ber hoye jabo.

7. optimized version er advantage:
    example:
    [1,2,3,4,5]
    👉 basic version: still O(n²)
    👉 optimized version: 1 iteration e bujhe jabe sorted
    👉 TC = O(n)


8. common mistake:
    ❌ inner loop e n-1-i na dile already sorted part abar check hobe
    ❌ swapped flag use na korle already sorted array teo unnecessary loop cholbe

*/

/*
BUBBLE SORT ALGORITHM - TWO VERSIONS

1. BASIC BUBBLE SORT:
   - Time Complexity:
     * Best Case: O(n²)
     * Average Case: O(n²)
     * Worst Case: O(n²)
   - Space Complexity: O(1)

2. OPTIMIZED BUBBLE SORT:
   - Time Complexity:
     * Best Case: O(n)
     * Average Case: O(n²)
     * Worst Case: O(n²)
   - Space Complexity: O(1)

table:
    |-----------------------|--------------|-----------------|---------------|------------------|
    | Version               | Best Case TC | Average Case TC | Worst Case TC | Space Complexity |
    |-----------------------|--------------|-----------------|---------------|------------------|
    | Basic Bubble Sort     | O(n²)        | O(n²)           | O(n²)         | O(1)             |
    | Optimized Bubble Sort | O(n)         | O(n²)           | O(n²)         | O(1)             |
    |-----------------------|--------------|-----------------|---------------|------------------|

*/

#include <bits/stdc++.h>
using namespace std;

void basicBubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {          // itaration loop
        for (int j = 0; j < n - 1 - i; j++) {  // adjacent element compare loop
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void optimizedBubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;  // swap variable ta outer loop er moddhei likha lagbe. karon protibar iteration er shurute swap variable false thakbe. jodi swap hoy taile taile swap variable tru hobe and break hobe na. next iteration abar false diye shuru hobe. and swap na hole false ei thakbe and break hoye jabe.

        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // Early termination: if no swapping occurred, array is already sorted
        if (!swapped) {
            cout << "Array sorted early in pass " << i + 1 << endl;
            break;
        }
    }
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter array elements with spaces: ";

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    // basicBubbleSort(arr, n);
    optimizedBubbleSort(arr, n);

    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}