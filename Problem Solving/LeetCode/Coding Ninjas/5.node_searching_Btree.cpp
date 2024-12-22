bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    // Write your code here
    if (root == NULL)
        return false;

    bool l = isNodePresent(root->left, x);
    bool r = isNodePresent(root->right, x);
    return (root->data == x || l || r);
}