#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
}

void optimizedBubbleSort(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        bool flag = false;

        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }

        if (!flag) break;
    }
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Write the array element using space: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    // bubbleSort(arr, n);
    optimizedBubbleSort(arr, n);

    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}
