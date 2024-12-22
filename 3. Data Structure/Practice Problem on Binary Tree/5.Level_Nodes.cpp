// amake ekta level dewa thakbe oi level er shobgula node print korte hobe. root level er height 0

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
    int v; cin>>v;
    Node *root;
    
    if(v==-1) root=NULL; else root = new Node(v);
    queue<Node*> q; 
    if(root)q.push(root);

    while(!q.empty())
    {
        Node *f= q.front();
        q.pop();

        int l,r; cin>>l>>r;
        Node *left; Node *right;

        if(l==-1) left = NULL; else left = new Node(l);
        if(r==-1) right = NULL; else right = new Node(r);

        f->left= left; f->right = right;

        if(f->left) q.push(f->left); if(f->right) q.push(f->right);
    }

    return root;
}

void level_node(Node *root, int level, vector<int> &v)
{
    if(!root) {cout<<"Invalid"<<endl; return; }
    
    queue<pair<Node*, int>> q;
    q.push({root,0});

    while(!q.empty())
    {
        pair<Node*,int> pr = q.front();

        Node *a = pr.first; int l = pr.second;

        q.pop();

        if(l == level) v.push_back(a->val);

        if(a->left) q.push({a->left,l+1}); if(a->right) q.push({a->right, l+1});
    }
}

int main()
{
    Node *root = input();

    int level; cin>>level;

    vector<int> v;

    level_node(root,level,v);

    if(v.empty()) cout<<"Invalid"<<endl;
    else {for(int a: v) cout<<a<<" ";}

    return 0;
}

