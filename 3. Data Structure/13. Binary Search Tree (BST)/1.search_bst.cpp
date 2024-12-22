/*
    1. bst: 10 5 15 2 6 12 16 -1 3 -1 -1 -1 -1 -1 -1 -1 -1

    2. bst te duplicate value thakte parbe na. interview te question kore duplicate value kivabe handle korbo? duplicate value vulew tree te insert kora jabe na. node er value gula count korbo. same value ashle count 2 hobe. then jeitar value 2 hobe. oita duplicate. duplicate handle er code kore dey nai. nij theke korte hobe.

    3. bst hote hobe sorted. root theke choto value gula left e thakbe, root theke boro value gula right e thakbe.

    4. worst case e bst er time complexity height(h) er soman, O(h). karon 10 ta node thakle worst case e height 10 hoite pare.

       best case hobe perfect binary tree er jonne. perfect binary tree te protita node er duita kore child thake. perfect binary tree er height hoy logN hoy. so bst jodi perfect binary tree or nearly perfect binary tree hoy then tc hoy O(logN). logN er calculation ta khatay kora lagbe.
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

bool search(Node *root, int x)
{
    if (root == NULL)
        return false;

    if (root->val == x)
        return true;

    if (x < root->val)
        return search(root->left, x); // paile true return korbe, na paile false return korbe.
    else
        return search(root->right, x);
}

int main()
{
    Node *root = input_tree();

    if (search(root, 12))
        cout << "Yes, Found" << endl;
    else
        cout << "No, Not Found" << endl;

    return 0;
}

<<<<<<< HEAD:Data Structure/13.BST Implementation/1.search_bst.cpp

/*
=======
/*

>>>>>>> 6b52d5d3960832abc8b180e1006bffd47d17ad6b:Data Structure/13. BST Implementation/1.search_bst.cpp
    bool search(Node *root, int x)
    {
        if (root == NULL)
            return false;

        if (root->val == x)
            return true;

        if (x < root->val)
        {
            bool l = search(root->left, x);

<<<<<<< HEAD:Data Structure/13.BST Implementation/1.search_bst.cpp
            return l;
=======
            // return l;
>>>>>>> 6b52d5d3960832abc8b180e1006bffd47d17ad6b:Data Structure/13. BST Implementation/1.search_bst.cpp
            if (l == true)
                return true;
            else
                return false;
        }

        else
            return search(root->right, x);
    }

*/
<<<<<<< HEAD:Data Structure/13.BST Implementation/1.search_bst.cpp

=======
>>>>>>> 6b52d5d3960832abc8b180e1006bffd47d17ad6b:Data Structure/13. BST Implementation/1.search_bst.cpp
