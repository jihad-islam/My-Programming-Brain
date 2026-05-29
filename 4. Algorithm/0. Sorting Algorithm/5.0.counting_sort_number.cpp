/*
    note: eta fe exam er question onujayi code likha hoise. fe exam er question e value range 0-10 dewa chilo. mane array er maximum value 10. so amra counting array size 11 nichi.    

    1. counting sort algorithm e onnanot sorting algorithm er moto element gula compare kora hoy na, বরং protita value kotobar ase (frequency) seta count kora hoy.


    2. kothay use hoy: jokhon array er value range choto thake (e.g. 0–10), tokhon eta efficient hoy. value range onek boro hole memory waste hoy.


    3. main idea:
        Step 1: given array theke maximum value ber koro  
        Step 2: oi maximum value onujayi counting array create koro  
        Step 3: counting array diye frequency count koro  
        Step 4: sorted order e print koro  


    4. working process:

    ধরি:
    arr = [2, 1, 3, 2, 1]

    Step 1: max value ber kora:
    max = 3

    Step 2: counting array create:
    size = max + 1 = 4 // counting array er size hobe 4 and protita index e 0 rakhte hobe.

    counting_arr = [0, 0, 0, 0]
                    0  1  2  3 (index = value)

    Step 3: frequency count:

    arr[0] = 2 → counting_arr[2]++ → [0,0,1,0]  
    arr[1] = 1 → counting_arr[1]++ → [0,1,1,0]  
    arr[2] = 3 → counting_arr[3]++ → [0,1,1,1]  
    arr[3] = 2 → counting_arr[2]++ → [0,1,2,1]  
    arr[4] = 1 → counting_arr[1]++ → [0,2,2,1]  

    final counting array:
    index:   0 1 2 3  
    value:   0 2 2 1  


    5. sorted output generate (important):

    ekhon amra counting array er upor loop chalabo

    for (int i = 0; i <= max; i++)

    i represent kore value (0,1,2,3)

    counting_arr[i] bole:
    "i value kotobar ase"

    inner loop:

    for (int j = 0; j < counting_arr[i]; j++)

    mane:
    jotokkhon oi value er count ache,
    totobar oi value print korbo

    example:

    i = 0 → count = 0 → print nothing  

    i = 1 → count = 2 → print: 1 1  

    i = 2 → count = 2 → print: 2 2  

    i = 3 → count = 1 → print: 3  

    final output:
    1 1 2 2 3  


    6. most important logic:

    counting_arr[i] = i value kotobar ase

    sorting hocche:
    small theke boro value er index order e print kora


    7. time complexity (TC):

    O(n + k)

    n = array size  
    k = max value range  

    k choto hole fast


    8. space complexity:

    O(k) (extra counting array lage)

    max value boro hole memory beshi lagbe


    9. code er key part:

    frequency count:
    counting_arr[arr[i]]++

    sorted print:
    for (int i = 0; i <= max; i++)
        for (int j = 0; j < counting_arr[i]; j++)
            cout << i;


    10. edge cases:

    negative number thakle ei code kaj korbe na  
    value range beshi hole counting array boro hoye jabe  


    11. visualization idea:

    counting array ekta frequency map

    index = value  
    value = frequency  


    12. final memory hack:

    counting sort = "max ber koro → count koro → count onujayi print koro"

    kono comparison nai  
    sudhu frequency use kore sorting
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

    int counting_arr[11] = {0};  // karon value range 0–10

    // count frequency
    for (int i = 0; i < n; i++) {
        counting_arr[arr[i]]++;
    }

    // sorted output print
    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j < counting_arr[i]; j++) {
            cout << i << " ";
        }
    }

    return 0;
}