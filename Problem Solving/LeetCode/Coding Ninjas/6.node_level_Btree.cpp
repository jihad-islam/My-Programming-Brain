// amake root and jekono ekta node dibe, amake oi node er level khuje return kora lagbe.

#include <bits/stdc++.h>

int nodeLevel(TreeNode<int> *root, int searchedValue)
{
    // Write your code here.
    queue<pair<TreeNode<int> *, int>> q; // chatgpt te dekhlam <TreeNode<int>*> evabe likhar karon hoilo TreeNode ta ekta template. ami template bujhi na. normally <TreeNode*> evabe declare korlei hobe.

    // q.push(make_pair(root,1));
    q.push({root, 1}); // ekhane root node er level 1 dhora hoise. 0 dhorew code kora jabe.

    while (!q.empty())
    {
        pair<TreeNode<int> *, int> pr = q.front();

        TreeNode<int> *node = pr.first;
        int level = pr.second;

        q.pop();

        if (node->val == searchedValue)
        {
            return level;
        }
        if (node->left)
        {
            q.push({node->left, level + 1});
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }
}