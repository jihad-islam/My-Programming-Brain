/*
1. insertion sort concept (fe exam er note khatay details ase): insertion sort ekta comparison-based sorting algorithm.
    👉 array ke 2 part e vag kore chinta kora hoy:
        1. sorted part (left side): sorter part er jonne outer for loop eta left to right jabe.
        2. unsorted part (right side): unsorted part er jonne inner while loop eta right to left jabe.

    👉 unsorted part theke ekta element (key) niye sorted part e tar correct position e insert kora hoy.
    👉 protita iteration e sorted part 1 ta kore boro hoy.
    👉 card game e hate card sajano r moto kaj kore.
    👉 animation link:
            1. https://youtube.com/shorts/8OatrdaqjVM?si=zalrOhjHwVeGKKxh
            2. https://www.youtube.com/watch?v=Q1JdRUh1_98


2. keno "insertion" sort bola hoy?
    👉 karon protita iteration e ekta element ke sorted part er moddhe correct position e "insert" kora hoy.


3. code explaination er jonne insertionSort.md dekho


7. insertion sort er advantage:

    👉 implementation khub simple
    👉 nearly sorted array er jonno khub efficient
    👉 stable sorting algorithm
    👉 memory extra lage na
    👉 in-place sorting algorithm

    best case:
    O(n)


8. insertion sort er disadvantage:

    👉 reverse sorted array hole onek shift korte hoy
    👉 large dataset er jonno efficient na
    👉 worst case e O(n²)


table:
    |------------------|--------------|-----------------|---------------|------------------|
    | Algorithm        | Best Case TC | Average Case TC | Worst Case TC | Space Complexity |
    |------------------|--------------|-----------------|---------------|------------------|
    | Insertion Sort   | O(n)         | O(n²)           | O(n²)         | O(1)             |
    |------------------|--------------|-----------------|---------------|------------------|

*/

#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {  // i =1 theke start hobe karon first element already sorted
        int key = arr[i];

        int j = i - 1;

        while (j >= 0 && arr[j] > key) {  // shift larger elements
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;  // insert key in correct position
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

    insertionSort(arr);

    // print the sorted array
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}