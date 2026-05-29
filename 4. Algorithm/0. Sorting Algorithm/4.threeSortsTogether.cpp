/*
    👉selection sort: first element ke choto dhorbe then full array ghure shobcheye choto element khuje ber korbe and swap korbe. 1 ta iteration e 1 bari swap hoy.
    
    👉bubble sort: 1 ta iteration e pashapashi 2 ta element er comparison hoy and largest element ta last index e boshe jay. ekhane continuos swap hote thake inner loop e. 1 ta iteration 1 ta element ei last e boshbe.

    👉insertion sort: tash(card) er sort

        - selection sort e first element ke choto dhore array er shobcheye choto element ke select kore swap
        - bubble sort e barbar swap hoy
        - insertion sort: tash

    note: selection and bubble sort e first itaration ei boro element ta last index e boshe jay. tai ei 2 tar full array ghora lage na. tai inner loop n-1 er aag porjonto ghure. but insertion sort e n er aag porjto ghure.
*/
#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

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
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                swapped = true;
            }
        }

        if (!swapped) break;
    }
}

void insertionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int key = arr[i];

        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
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

    selectionSort(arr);
    bubbleSort(arr);
    insertionSort(arr);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}