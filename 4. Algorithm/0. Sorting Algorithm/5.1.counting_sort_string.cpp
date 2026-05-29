/*
    1. counting sort. eta ekta sorting algorithm.
    2. array er element er size choto hole ei counting sort onek valo kaj kore. it means time complexity onek kom thake.
       ekhane array er size choto howar kotha bola hoy nai, array er element er size choto howar kotha bola hoiche.

    3. ekta string input nibo then string er alphabet onujayi print korbo. input: hello output: ehllo
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int frq[26] = {0};

    for (char c : s) // ranged based for loop
    {
        frq[c - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < frq[i - 'a']; j++)
        {
            cout << i;
        }
    }

    return 0;
}