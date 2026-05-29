#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i = n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[minIndex]) minIndex = j;

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void bubbleSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
            }
        }

        if (!swapped) break;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    // selectionSort(arr);
    // bubbleSort(arr);
    // insertionSort(arr);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}