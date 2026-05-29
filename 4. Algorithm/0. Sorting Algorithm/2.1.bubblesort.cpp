/*
    - Vector dynamic size-er hoy.
    - Array-te age theke size dite hoy:
        int arr[5];
    - Kintu vector-e age theke size na dileo hoy:
        vector<int> arr;
*/

#include <bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>& arr) {  // ekhane chaile size(n) ow newa jaito. but vitore size niye nisi.
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
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

    bubblesort(arr);

    // for (int i = 0; i < arr.size(); i++) {
    //     cout << arr[i] << " ";
    // }

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}