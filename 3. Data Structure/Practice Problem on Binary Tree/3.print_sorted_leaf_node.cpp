/*
    1. descending order e leaf node gula print korte hobe. leaf node normally print kora jay, but jehetu sorted leaf node print korte bolse tai vector er maddhome korsi.
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

void level_order(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        if (f->left == NULL && f->right == NULL)
            cout << f->val << " ";

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

void postorder(Node *root, vector<int> &v) // dereferance korsi tai ekhane vector er ja change hobe onno function ew vector change hobe.
{
    if (root == NULL)
        return;
    postorder(root->left, v);
    postorder(root->right, v);

    if (root->left == NULL && root->right == NULL)
        v.push_back(root->val);
}

void sort_node(Node *root)
{
    vector<int> v;
    postorder(root, v);

    sort(v.rbegin(), v.rend());

    for (int a : v)
        cout << a << " ";
}

int main()
{
    Node *root = input();

    sort_node(root);

    return 0;
}
