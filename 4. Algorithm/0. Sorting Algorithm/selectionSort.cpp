/*
1. selection sort concept:
    👉 selection sort ekta comparison-based sorting algorithm
    👉 protita iteration e minimum element khuje ber kora hoy
    👉 tarpor oi minimum element ke current position er sathe swap kora hoy

    example:
    [32, 224, 3, 44]

    1st iteration:
    minimum = 3
    swap with 32

    result:
    [3, 224, 32, 44]


2. selection sort working process:

    ধরি:
    [32, 224, 3, 44]

    -------------------
    Iteration 1:

    minimum = 3

    swap:
    [3, 224, 32, 44]

    -------------------
    Iteration 2:

    minimum = 32

    swap:
    [3, 32, 224, 44]

    -------------------
    Iteration 3:

    minimum = 44

    swap:
    [3, 32, 44, 224]

    sorted array:
    [3, 32, 44, 224]


3. loop breakdown (IMPORTANT):

outer loop:
    for (int i = 0; i < n - 1; i++)
    👉 koyta iteration cholbe seta control kore
    👉 protita iteration e ekta kore minimum element fixed hoye jay

inner loop:
    for (int j = i + 1; j < n; j++)
    👉 unsorted part theke minimum element khuje
    👉 j = i + 1 diye start hoy karon i position already current minimum dhora hoy


4. minimum index tracking:

    int minIndex = i;

    👉 prothome current position ke minimum dhora hoy
    👉 pore choto element paile minimum index update hoy


5. swap condition:

    if (arr[j] < arr[minIndex])
    👉 choto element paile minimum index change hobe


6. selection sort er important bishoy:
    👉 bubble sort er moto adjacent swap hoy na
    👉 protita pass e shudhu 1 bar final swap hoy


7. Time Complexity:
    Best Case: O(n²)
    Average Case: O(n²)
    Worst Case: O(n²)

8. Space Complexity:
    O(1)

*/

#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; i++) {  // iteration loop

        int minIndex = i;

        for (int j = i + 1; j < n; j++) {  // minimum finding loop

            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // swap two numbers
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements with spaces: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}