/*
    tree: 10 20 30 40 50 -1 60 -1 -1 -1 -1 70 80 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1   sum: 360
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

        Node *myLeft;
        Node *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        a->left = myLeft;
        a->right = myRight;

        if (a->left)
            q.push(a->left);
        if (a->right)
            q.push(a->right);
    }

    return root;
}

int sum(Node *root)
{
    if (root == NULL)
        return 0;

    int s = 0;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        // cout << f->val << " ";

        s += f->val;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }

    return s;
}

int main()
{
    Node *root = input();

    int result = sum(root);

    cout << result << endl;

    return 0;
}
