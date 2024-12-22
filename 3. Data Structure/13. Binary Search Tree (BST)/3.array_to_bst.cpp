/*
    1. array: 6
              2 5 8 12 15 18
*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        cout << f->val << " ";

        // 3. tar children gulo ke rakha
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

Node *convert(int a[], int l, int r)
{
    if (l > r) // base case
        return NULL;

    int mid = (l + r) / 2; // eta mid index ber kortesi, not value.

    Node *root = new Node(a[mid]); // mid index er value take root e convert korlam

    Node *leftRoot = convert(a, l, mid - 1);  // recursive call
    Node *rightRoot = convert(a, mid + 1, r); // recursive call

    root->left = leftRoot;
    root->right = rightRoot;

    return root;
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    Node *root = convert(a, 0, n - 1); // a holo array. 0 holo first index, jeta left hishebe function e pass hobe, n-1 holo last index jeita right hishebe pass hobe.

    level_order(root);

    return 0;
}