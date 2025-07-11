/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isMirror(struct TreeNode* t1,struct TreeNode* t2){
    if(t1==NULL && t2==NULL){
        return true;
    }
    if(t1==NULL || t2==NULL){
        return false;
    }
    if(t1->val==t2->val && isMirror(t1->left,t2->right) && isMirror(t1->right,t2->left)){
        return true;
    }
    else{
        return false;
    }
}
bool isSymmetric(struct TreeNode* root) {
    if(root==NULL){
        return true;
    }
    return isMirror(root->left,root->right);
}

///MIRROR OF TREE

void mirror(struct node* root) {
    if (root == NULL)
        return;

    // Swap left and right
    struct node* temp = root->left;
    root->left = root->right;
    root->right = temp;

    // Recur for left and right
    mirror(root->left);
    mirror(root->right);
}