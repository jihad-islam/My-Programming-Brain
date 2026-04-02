/*
    1. subarray ki?

    subarray holo array er continuous (consecutive) element der ekta part.

    example:
    arr = [1,2,3]

    possible subarray:
    [1], [1,2], [1,2,3], [2], [2,3], [3]

    important:
    subarray always continuous hote hobe
    (1,3) eta subarray na, karon majhe 2 nai


    2. subsequence ki? (IMPORTANT DIFFERENCE)

    subsequence holo:
    "array theke element select kora jabe, kintu continuous howa lagbe na"

    example:
    arr = [1,2,3]

    possible subsequence:
    [1], [2], [3], [1,2], [2,3], [1,3], [1,2,3]

    👉 ekhane (1,3) valid, karon order maintain ase


    3. subarray vs subsequence:

    subarray:
    - continuous hote hobe
    - size fix korle limited option

    subsequence:
    - continuous lagbe na
    - onek beshi combination possible

    👉 total subsequence:
    2^n (including empty)


    4. total subarray koto gula?

    formula:
    n*(n+1)/2

    example:
    n = 5 → total subarray = 5*6/2 = 15


    5. code er main idea:

    amra 3 ta loop use kore
    shob possible subarray print kortesi

    Loop gula:

    1st loop → start index fix kore
    2nd loop → end index fix kore
    3rd loop → start theke end porjonto print kore


    6. loop breakdown:

    for (int start = 0; start < n; start++)
    start = subarray er starting index

    for (int end = start; end < n; end++)
    end = subarray er ending index

    note:
    end always start theke suru hoy
    tai valid subarray hoy


    7. subarray print logic:

    for (int i = start; i <= end; i++)
    i start theke end porjonto jay

    ei loop ta:
    actual subarray print kore


    8. working process (step-by-step):

    ধরি:
    arr = [1,2,3]

    start = 0:

    end = 0 → print [1]
    end = 1 → print [1,2]
    end = 2 → print [1,2,3]

    start = 1:

    end = 1 → print [2]
    end = 2 → print [2,3]

    start = 2:

    end = 2 → print [3]


    9. output pattern:

    same start er subarray gula ek line e print hoy

    example:
    1 12 123
    2 23
    3


    10. time complexity (TC):

    O(n^3)

    - start loop → n
    - end loop → n
    - print loop → n

    total → n * n * n


    11. important observation:

    subarray define korte lage:
    (start, end)

    print korte lage:
    start → end porjonto traverse


    12. visualization idea:

    start fixed → end barte thake

    example:
    start = 0

    [1]
    [1,2]
    [1,2,3]


    14. final memory hack:

    subarray = start → end (continuous)

    subsequence = skip kora jabe (continuous lagbe na)

    2 loop → subarray define
    1 loop → subarray print
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            for (int i = start; i <= end; i++) {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
