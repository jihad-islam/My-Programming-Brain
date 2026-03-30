#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define _test     \
    int _TEST;    \
    cin >> _TEST; \
    while (_TEST--)

int main() {
    int num = 28;
    int sum = 0;

    for (int i = 1; i <= (num / 2); i++) {
        if (num % i == 0) {
            cout << i << endl;
            sum += i;
        }
    }
    if (sum == num)
        cout << "perfect number";
    else
        cout << "not perfect number";

    return 0;
}
