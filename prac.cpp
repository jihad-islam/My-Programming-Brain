#include <bits/stdc++.h>
using namespace std;

void mergeArray(vector<int> a1, int m, vector<int> a2, int n) {
    vector<int> final;
    int i = 0, j = 0;

    while (i < m and j < n) {
        if (a1[i] < a2[j]) {
            final.push_back(a1[i]);
            i++;
        } else {
            final.push_back(a2[j]);
            j++;
        }
    }

    while (i < m) {
        final.push_back(a1[i]);
        i++;
    }
    while (j < n) {
        final.push_back(a2[j]);
        j++;
    }

    for (auto x : final) {
        cout << x << " ";
    }
}

int main() {
    vector<int> a1 = {6, 12, 15, 25};
    vector<int> a2 = {3, 5, 8, 12, 15, 18, 20};

    mergeArray(a1, a1.size(), a2, a2.size());
    return 0;
}