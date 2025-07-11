/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int isCheck(struct TreeNode* root){
    if(root==NULL){
        return 0;
    }
    int lh=isCheck(root->left);
    if(lh==-1){
        return -1;
    }
    int rh=isCheck(root->right);
    if(rh==-1){
        return -1;
    }
    if(abs(lh-rh)>1){
         return -1;
    }
    return (lh>rh?lh:rh)+1;
}
bool isBalanced(struct TreeNode* root) {
  return isCheck(root)!=-1;  
}