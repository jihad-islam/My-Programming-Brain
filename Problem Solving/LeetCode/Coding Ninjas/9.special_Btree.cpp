/*
    1. jodi binary tree er 2 ta child or kono child na thake then oita special binary tree. 1 ta child thakle oita special binary tree hobe na.
*/

#include <bits/stdc++.h>

bool isSpecialBinaryTree(BinaryTreeNode<int> *root) // true return korle special binary tree
{
    // Write your code here.
    if (root->left == NULL && root->right == NULL)
        return true;

    if (root->left == NULL || root->right == NULL)
        return false;

    bool l = isSpecialBinaryTree(root->left);
    bool r = isSpecialBinaryTree(root->right);
    if (l == false || r == false)
        return false;

    return true;
}