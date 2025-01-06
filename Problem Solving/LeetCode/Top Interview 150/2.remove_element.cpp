/*
    problem statement: amke ekta array and ekta value dewa thakbe. given array
   theke oi value ta remove korte hobe. and final array er size return korte
   hobe.

   * tc: O(n) and sc: O(n). but eta O(1) sc tew kora jabe(go for chatgpt).
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 2, 2, 5, 20, 2, 10};
    int val = 2;

    vector<int> final;

    for (auto x : a) {
        if (x != val) final.push_back(x);
    }

    cout << final.size() << endl;
}

// optimal approach for O(1) sc
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 2, 2, 5, 20, 2, 10};
    int val = 2;

    int k = 0;  // Tracks the position to overwrite elements

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != val) {
            a[k++] = a[i];
        }
    }

    cout << k << endl;  // New size of the vector
    // Optional: If you want to resize the vector to exclude the removed
    // elements
    a.resize(k);

    // Output the modified vector
    for (int x : a) {
        cout << x << " ";
    }
    cout << endl;
}
