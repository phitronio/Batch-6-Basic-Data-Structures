// Problem link: https://www.codingninjas.com/studio/problems/diameter-of-the-binary-tree_920552

int mx;
int max_height(TreeNode<int> *root)
{
    if(root == NULL)
        return 0;
    int l = max_height(root->left);
    int r = max_height(root->right);
    int d = l+r;
    mx = max(mx,d);
    return max(l,r) + 1;
}

int diameterOfBinaryTree(TreeNode<int> *root){
    mx = 0;
	int h = max_height(root);
    return mx;
}
