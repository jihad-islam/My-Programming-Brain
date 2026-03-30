#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define _test     \
    int _TEST;    \
    cin >> _TEST; \
    while (_TEST--)

int main() {
    int num = 1100, place = 1, ans_dec = 0, remainder;

    while (num > 0) {
        remainder = num % 10;
        num = num / 10;

        ans_dec += remainder * place;
        place *= 2;
    }

    cout << ans_dec;

    return 0;
}
