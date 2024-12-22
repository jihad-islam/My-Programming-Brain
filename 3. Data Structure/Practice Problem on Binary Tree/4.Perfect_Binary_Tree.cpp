/*
    1. jei binary tree er protita parent er 2 ta children thakbe sheita perfect binary tree.
    2. h height bishisto perfect binary tree er node shongha holo 2^h -1.
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

Node *input()
{
    int v;
    cin >> v;
    Node *root;

    if (v == -1)
        root = NULL;
    else
        root = new Node(v);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *a = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;

        if (l == -1)
            left = NULL;
        else
            left = new Node(l);
        if (r == -1)
            right = NULL;
        else
            right = new Node(r);

        a->left = left;
        a->right = right;

        if (a->left)
            q.push(a->left);
        if (a->right)
            q.push(a->right);
    }
    return root;
}

int height(Node *root)
{
    if (root == NULL)
        return 0;

    int a = height(root->left);
    int b = height(root->right);

    return max(a, b) + 1;
}

int count(Node *root)
{
    if (root == NULL)
        return 0;

    int a = count(root->left);
    int b = count(root->right);

    return a + b + 1;
}

int main()
{
    Node *root = input();

    int h = height(root);

    int n = count(root);

    int r = int(pow(2.0, h * 1.0) - 1);

    if (n == r)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}