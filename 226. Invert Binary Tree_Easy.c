/*Invert a binary tree.

     4
   /   \
  2     7
 / \   / \
1   3 6   9
to
     4
   /   \
  7     2
 / \   / \
9   6 3   1*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 
struct TreeNode* invertTree(struct TreeNode* root) {
    if(root==NULL){return NULL;}
    if(root->right==NULL && root->left==NULL){return root;}
    else{
        root->right=invertTree(root->right);
        root->left=invertTree(root->left);
        struct TreeNode* temp;
        temp=root->right;
        root->right=root->left;
        root->left=temp;
    }
    return root;
        
}
