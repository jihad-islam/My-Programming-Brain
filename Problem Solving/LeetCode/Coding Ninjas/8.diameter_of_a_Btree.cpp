/*
    1. diameter holo ekta node theke arekta node er maximum durotto or height

    2. ei code ta bujhi nai valo kore. h and mx er kaj ki?
*/

int mx = 0;
int maxHeight(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    int d = l + r; // root soho protita node er diameter. but protibar ei function call hoile diameter reset hoye jabe tai diameter track rakha lagbe.

    mx = max(mx, d); // eita diameter track rakhar jonne. shurute mx=0 but diameter er kono ekta value ase. then oi diameter er value mx e store thakbe. then abar onno ekta node er diameter ashbe then oi duitar moddhe maximum ta abaro mx e store thakbe. evabe cholte thakbe.

    return max(l, r) + 1; // return ta shobar seshei dewa lagbe karon
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
    // Write Your Code Here.
    mx = 0;

    int h = maxHeight(root);
    return mx;

    // int l = maxHeight(root->left);
    // int r = maxHeight(root->right);
    // return max(mx, l + r);
}