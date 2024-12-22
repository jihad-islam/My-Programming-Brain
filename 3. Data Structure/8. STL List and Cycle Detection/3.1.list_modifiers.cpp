// any position insertion and deletion list modifiers

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // insertion at any  position
    list<int> L1 = {10, 20, 30, 40, 50};

    L1.insert(next(L1.begin(), 2), 100); // ekhane 2 means 2 no index porjonto loop cholbe, but ami value insert korbo 3 no index e.

    L1.insert(next(L1.begin(), 3), {500, 600, 700}); // insert() function diye multiple value ow insert kora jay. curly braces diye er moddhe value gulo likhe dilei hoy.

    /*
        insert() function er kahini ase.

        1. eita doubly linked list er jekono position e node insert kore. any position e node insert korte hole amake loop chalaya oi position er aage jawa lagto. insert() function er moddhe jei next() function ta ase, oi next() function ta loop chalay, then comma diye amake bole dite hobe kon position e ami insert korte chaitesi, next() function ta oi position er ag porjonto loop chalabe. then next() function seshe kon value insert korte hobe oita bole dite hobe. tc= O(n).

        2. ei function ta tail and head both index ei insert korte pare. but complexity O(n) hoy. r jodi push_back() and push_front() use kore tail and head e insert kori then complexity    O(1) hobe. so, jodi tail ei insert korte hoy then ami hudai insert() function use ken korbo.

        3. then amar doubly linked list er size 5. ekhn jodi ami 6 index e node insert korte chai then ei function ghure abar head e chole ashbe, eivabe cycle cholte thakbe.
    */

    for (int value : L1)
    {
        cout << value << endl;
    }
    cout << endl;

    // delete at any position
    list<int> L2 = {10, 20, 30, 40, 50, 60, 70};

    L2.erase(next(L2.begin(), 4)); // 5 no index delete korbo. insert() function er moto delete() function ero same kahini. tc= O(n).

    L2.erase(next(L2.begin(), 2), next(L2.begin(), 5)); // ami L2 list er 30 theke 50 delete korte chai. amake prothome next() e 30 er pointer dewa lagbe, then abaro next() niye 60 er pointer dewa lagbe. karon jei ghorer pointer dibo tar aager index porjonto delete korbe.

    for (int value : L2)
    {
        cout << value << endl;
    }
    cout << endl;

    return 0;
}