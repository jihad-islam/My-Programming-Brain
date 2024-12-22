/*
    1. 1 and negative number kokhono prime number hote parbe na.

    2.  prime number just 1 and oi number itself dara divisible. r kono jeisokol number dara divisible oi number gulare tar udfadok ba factor bole. jemon 10 holo 1,2,5,10 dara vag jay, that means 1,2,5,10 hoilo 10 er factors. ekhon 10  prime kina ber korte hoile 1 theke 9 porjonto vag korar proyojon nai, ami 10 er factor gula dara vag korlei bujhe jabo. jodi prime number hoito prime number er 1 and oi number chara kono facot nai, that means 1 and oi shongka chara r kono number dara vag jabe na. jemon 11 er factor 1,11. r kono factor nai. tai facotr diye check korle tc kome ashe.

    main kotha hoilo kono number er 1 and oi number itself chara r kono factor thakle oi number ta prime na.
*/

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) // i*i <= n bolte bujhaitese ami n er square root porjonto loop chalabo
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int n;
    cin >> n;

    isPrime(n) ? cout << "prime\n" : cout << "not prime\n"; // ternary operator use kora hoise.

    return 0;
}
