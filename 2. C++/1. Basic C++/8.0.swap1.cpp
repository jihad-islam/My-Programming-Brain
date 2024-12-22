#include <iostream>
#include <algorithm>
using namespace std;

void my_swap(int *a, int *b) // my_swap function ta kintu kono kicu return kortese na. just dereference er maddhome value swap kortese.
{
    int swap = *a;
    *a = *b;
    *b = swap;
}

int main()
{
    int a, b;

    cin >> a >> b;

    my_swap(&a, &b);

    cout << a << " " << b << endl;

    return 0;
}