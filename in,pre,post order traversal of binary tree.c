// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
void preorder(struct node *root){
    if(root==0){
        return;
    }
    printf("%d ",root->data);
    
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node *root){
    if(root==0){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
    
}
void inorder(struct node *root){
    if(root==0){
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
struct node* create(){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    int val;
    printf("Enter the node :");
    scanf("%d",&val);
    if(val==-1){
        return NULL;
    }
    newnode->data=val;
    printf("Enter the left child of %d\n",val);
    newnode->left=create();
    printf("Enter the right child of %d\n",val);
    newnode->right=create();
    return newnode;
}
int main() {
    struct node *root;
    root=create();
    printf("preorder traversal: ");
    preorder(root);
    printf("\n");
    printf("postorder traversal: ");
    postorder(root);
    printf("\n");
    printf("inorder traversal: ");
    inorder(root);

    return 0;
}