/*
    1. function use kore dynamic node or variable input newar stucture holo:
                                        i.   prothome data type
                                        ii.  then pointer soho function er nam
                                        iii. then parenthesis

    2. dynamic integer input:  int *input()
       dynamic node input:  Node *input()
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

Node *input_tree() // function er maddhome kono dynamic kichu input nite hole eitai tar structure.
{
    int val;
    cin >> val;

    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;

    if (root) // root NULL hoile push hobe na.
        q.push(root);
    /*
        ekhane ektu kahini ase. ekhane root ase kina eta check kori nai, root NULL kina eta check korsi. jodi root NULL na thake then push korbo na. but empty queue te push kora jay without error. tahole aage thekei node ase kina eta check korar reason ki?

        jodi root thake then ami push korbo, naile na. dhoro ami check na korei push korlam. tahole root NULL hoilew push hobe, and nicher while loop e chole jabe. but ami jodi NULL queue te push na kori then while loop cholbe na. actually while loop terminate korar jonnei NULL wala root queue te push kori nai.

        while loop e queue te jei root ase oi root er left and right children input nibe. ekhn queue er node tai holo NULL and abar while loop e NULL eri left and right child input nitesi tokhon runtime error khabo.
    */

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
    q.push(root); // ekhane push korte check korlam na ken? karon amake root diyei dise root NULL howar possibility nai, tai hudai check kori nai.

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

int main()
{
    Node *root = input_tree();
    level_order(root);
    return 0;
}