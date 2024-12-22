#include <bits/stdc++.h>

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    bool frq[3005] = {false};
    queue<pair<TreeNode<int> *, int>> q;

    if (root) // jodi root thake to push korbo, na thakle korbo na. taile full tree ta empty thakbe and porer operation gulo ow hobe na. karon porer operation gulo empty tree er jonne na.
        q.push({root, 1});

    vector<int> v;

    while (!q.empty())
    {
        pair<TreeNode<int> *, int> pr = q.front();
        TreeNode<int> *node = pr.first;
        int level = pr.second;
        q.pop();

        if (frq[level] == false)
        {
            v.push_back(node->data);
            frq[level] = true;
        }

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
    return v;
}