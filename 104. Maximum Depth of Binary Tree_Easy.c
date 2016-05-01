/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
   int depth=0;
   if(NULL==root){
       return 0;
   }
   else{
       depth++;
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