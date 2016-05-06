/*Given a binary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
   if(NULL==root){
       return 0;
   }
   else{
       int left=maxDepth(root->left);
       int right=maxDepth(root->right);
       if(left<right){
            return right+1;
       }
       else{
           return left+1;
       }
   }
}
