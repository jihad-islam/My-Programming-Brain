/*
1. selection sort concept (fe exam er note khatay details ase): selection sort ekta comparison-based sorting algorithm.
    👉 prothom index er element ke minimum(fixed) dhore full array iterate kora hoy and array er lowest value er sathe swap kora hoy.
    👉 ekhane element ke actually minimum dhora hoy na. index ke minimum dhora hoy. 
    👉 prothom index(not value) ke minimum dhora hoy( int min = i; ). then full array er index iterate kora hoy(using inner loop: j). but comparison kora hoy index er value kei ( arr[j] < arr[min] ). then condition manle min update kora hoy index diye ( min = j; ). then outer loop e oi index er value swap kora hoy ( swap(arr[i], arr[min]); ).
    👉 animation link: https://www.youtube.com/watch?v=MxEooU-8ps8


2. keno "selection" sort bola hoy?
    👉 karon protita iteration e ekta minimum element "select" kora hoy.


3. basic selection sort working process:

    dhori:
    [5, 1, 4, 2]

    -------------------
    Iteration 1:

    minimum = 1

    swap(5,1)

    [1,5,4,2]

    👉 smallest element first e chole gelo

    -------------------
    Iteration 2:

    remaining unsorted part:
    [5,4,2]

    minimum = 2

    swap(5,2)

    [1,2,4,5]

    👉 2nd smallest element fixed

    -------------------
    Iteration 3:

    remaining:
    [4,5]

    minimum = 4

    swap(4,4)

    [1,2,4,5]

    sorted array:
    [1,2,4,5]




4. selection sort er advantage:

    👉 implementation khub simple
    👉 swap shonkha kom hoy
    👉 memory extra lage na
    👉 in-place sorting algorithm

    total swap maximum:
    n - 1


5. selection sort er disadvantage:

    👉 array already sorted thakleo shob comparison cholbe
    👉 kono early termination nai
    👉 large dataset er jonno efficient na


table:
    |------------------|--------------|-----------------|---------------|------------------|
    | Algorithm        | Best Case TC | Average Case TC | Worst Case TC | Space Complexity |
    |------------------|--------------|-----------------|---------------|------------------|
    | Selection Sort   | O(n²)        | O(n²)           | O(n²)         | O(1)             |
    |------------------|--------------|-----------------|---------------|------------------|

*/


#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n; i++)  // outer loop to iterate all the numbers
    {
        int min = i;

        for (int j = i + 1; j < n; j++)  // inner loop to find the minimum index
        {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        // swap two numbers
        swap(arr[i], arr[min]);
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

    // print the sorted array
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}