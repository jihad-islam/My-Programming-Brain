#include <bits/stdc++.h>
using namespace std;

int stack_arr[100]; // stack storage
int sp = 0;         // stack pointer (top index)

void push(int x)
{
    sp = sp + 1;          // step 1: pointer upore gelo // ekhane 1 no index e push kortesi. 0 no index empty thakbe.
    stack_arr[sp] = x;    // step 2: value top e boslo
}

int pop()
{
    int val = stack_arr[sp]; // step 1: top value nilam
    sp = sp - 1;             // step 2: pointer niche namlo
    return val;
}

int main()
{
    push(10);
    push(20);
    push(30);

    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;

    return 0;
}