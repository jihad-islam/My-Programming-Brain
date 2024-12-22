// head and tail insertion and deletion list modifiers

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // insertion
    list<int> L1 = {10, 20, 30, 40, 30, 30, 70};

    L1.push_back(100);  // push back doubly linked list er tail e node insert kore with complexity of O(1). // tail insertion
    L1.push_front(200); // head e insert kore with complexity of O(1) // head insertion

    for (int value : L1)
    {
        cout << value << endl;
    }
    cout << endl;

    // deletion
    list<int> L2 = {10, 20, 30, 40, 30, 30, 70};

    L2.pop_back();  //  tail delete
    L2.pop_front(); // head delete

    for (int value : L2)
    {
        cout << value << endl;
    }

    return 0;
}