/*
BUBBLE SORT ALGORITHM - TWO VERSIONS

1. BASIC BUBBLE SORT (Current Implementation):
   - Time Complexity:
     * Best Case: O(n²) - Always runs full nested loops even if array is sorted
     * Average Case: O(n²)
     * Worst Case: O(n²)
   - Space Complexity: O(1) - Uses constant extra space

2. OPTIMIZED BUBBLE SORT (Below):
   - Time Complexity:
     * Best Case: O(n) - Early termination when array is already sorted
     * Average Case: O(n²)
     * Worst Case: O(n²)
   - Space Complexity: O(1) - Uses constant extra space
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter array elements with spaces: ";

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // BASIC BUBBLE SORT ALGORITHM
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements using C++ swap function
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Sorted array (Basic): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
Optimized version:
    // TC: Best O(n), Average/Worst O(n²), SC: O(1)
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
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
*/