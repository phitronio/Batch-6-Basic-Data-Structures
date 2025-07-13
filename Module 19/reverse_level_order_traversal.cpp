// Problem link: https://www.codingninjas.com/studio/problems/reverse-level-order-traversal_764339

#include<bits/stdc++.h>
vector<int> reverseLevelOrder(TreeNode<int> *root){
    vector<int> v;
    queue<TreeNode<int> *> q;
    if(root) 
        q.push(root);
    while(!q.empty())
    {
        TreeNode<int> * f = q.front();
        q.pop();

        v.push_back(f->val);

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
    reverse(v.begin(),v.end());
    return v; 
}