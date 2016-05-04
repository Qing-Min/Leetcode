/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* searchANode(struct TreeNode* root,int value){
    struct TreeNode* current=NULL;
    current=root;
    while(current!=NULL){
        if(value==current->val){
            return current;
        }
        if(value<current->val){
            current=current->left;
        }
        if(value>current->val){
            current=current->right;
        }    
    }
    return NULL;
}
int numberOfElementSearched(struct TreeNode* root,int a,int b){
    if(root==NULL){
        return 0;
    }
    int count=0;
    if( searchANode(root,a)!=NULL ){count++;}
    if( searchANode(root,b)!=NULL ){count++;}
    return count;
}
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    int pvalue=p->val;
    int qvalue=q->val;
    struct TreeNode* current=root;
    while(NULL!=current){
        if( 2==numberOfElementSearched(current->right,pvalue,qvalue) ){
            current=current->right;
            continue;
        }
        if( 2==numberOfElementSearched(current->left,pvalue,qvalue) ){
            current=current->left;
            continue;
        }
        if( (1==numberOfElementSearched(current->right,pvalue,qvalue))||(1==numberOfElementSearched(current->left,pvalue,qvalue)) ){
            return current;
        }
    }
}
