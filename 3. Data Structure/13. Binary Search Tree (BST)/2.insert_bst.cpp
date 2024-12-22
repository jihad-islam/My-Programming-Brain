/*
    1. bst: 10 5 15 2 6 12 16 -1 3 -1 -1 -1 -1 -1 -1 -1 -1
    
    2. jei node ta insert korbo oita jehetu leaf node e insert hobe, tai full bst traverse korte hobe. then eitar complexity ow height er shoman hobe. so best case e ekta node insertion er tc holo O(logN) and worst case e tc holo O(n). n shongkhok value insertion er complexity best case e O(nlogN) and worst case e O(n*n).
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

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ano
        Node *p = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
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

        p->left = myLeft;
        p->right = myRight;

        // 3. children gulo ke push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

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

void insert(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
        return;
    }

    if (x < root->val)
    {
        if (root->left == NULL)
            root->left = new Node(x);

        else
            insert(root->left, x); // recursive call
    }

    else
    {
        if (root->right == NULL)
            root->right = new Node(x);

        else
            insert(root->right, x); // recursive call
    }
}

int main()
{
    Node *root = input_tree();

    int x;
    cin >> x;
    insert(root, x);

    // insert(root, 13);
    // insert(root, 32);
    // insert(root, 27);
    // insert(root, 22);

    level_order(root);

    return 0;
}