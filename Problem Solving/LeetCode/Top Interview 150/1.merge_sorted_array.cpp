/*
 * problem statement: amake duita integer array dibe. array duita increasing
 * order e thakbe. amake oi duita array ke merge korte hobe.
 */

// basic

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define _test     \
    int _TEST;    \
    cin >> _TEST; \
    while (_TEST--)

// normal solution with O(m+n) complexity
void test(vector<int> arr1, int m, vector<int> arr2, int n) {
    vector<int> final;

    // duita vector ke append kora hole tader complexity O(m+n)
    for (auto x : arr1) final.push_back(x);
    for (auto x : arr2) final.push_back(x);

    // normal sort er complexity O(nlogn), etar complexity O( (n+m)log(n+m) )
    sort(final.begin(), final.end());

    for (auto x : final) cout << x << " ";
}

/*
    1. O(m+n)

    2. ekhane sort function ta bad disi. sort function er complexity nlogn. sort
   function bad diye two pointers use korsi. two pointers use kore automatic
   sort hoye gese.

    3. two pointers aagew korsi but vinno vabe. duita point(i and j) dhore kaj
   korai hocche two pointers.
*/
void test(vector<int> arr1, int m, vector<int> arr2, int n) {
    vector<int> final;
    int i = 0, j = 0;
    /*
        - ei technique e(2 pointers) final array te duita array thekei value
       insert hobe. but jekono ekta array sesh hoye jabe(duita array er size
       equal holew) then 'i<m and i<n' condition false hoye jabe. but onno ekta
       array remaining thakbe. for better understanding take pen and paper and
       practice in khata.

        - O(n+m)
    */
    while (i < m and j < n) {
        if (arr1[i] < arr2[j]) {
            final.push_back(arr1[i]);
            i++;
        } else {
            final.push_back(arr2[j]);
            j++;
        }
    }

    // next duita loop er moddhe remaining array ta traverse hobe. O(m)
    while (i < m) {
        final.push_back(arr1[i]);
        i++;
    }
    // O(n)
    while (j < n) {
        final.push_back(arr2[j]);
        j++;
    }

    // O(m+n)
    for (auto x : final) cout << x << " ";
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 6};
    vector<int> arr2 = {2, 10, 20, 30};

    test(arr1, arr1.size(), arr2, arr2.size());

    return 0;
}

// solution. link:
// https://leetcode.com/problems/merge-sorted-array/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
   public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        vector<int> final;
        int i = 0, j = 0;

        while (i < m and j < n) {
            if (nums1[i] < nums2[j]) {
                final.push_back(nums1[i]);
                i++;
            }

            else {
                final.push_back(nums2[j]);
                j++;
            }
        }
        while (i < m) {
            final.push_back(nums1[i]);
            i++;
        }
        while (j < n) {
            final.push_back(nums2[j]);
            j++;
        }

        nums1 = final;
    }
};
