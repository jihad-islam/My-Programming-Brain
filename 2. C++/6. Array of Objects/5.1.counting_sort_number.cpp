/*
    Counting Sort (Integer Version)

    1. array er element er value choto hole eta efficient
    2. age count korbo, tarpor sorted order e print korbo
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // array size

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // input numbers
    }

    int frq[11] = {0};  // karon value range 0–10

    // count frequency
    for (int i = 0; i < n; i++) {
        frq[arr[i]]++;
    }

    // sorted output print
    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j < frq[i]; j++) {
            cout << i << " ";
        }
    }

    return 0;
}