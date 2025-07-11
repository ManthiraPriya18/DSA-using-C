// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
int search(int x,struct node* root){
    if(root==NULL){
        return 0;
    }
    if(root->data==x){
        return 1;
    }
    else if(x<=root->data){
        int y=search(x,root->left);
        return y;
    }
    else{
        int y=search(x,root->right);
        return y;
    }
    return 0;
}
struct node* createNode(int x){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct node* insertNode(struct node* root,int x){
    if(root==NULL){
        printf("Root node\n");
        root=createNode(x);
    }
    else if(x<=root->data){
        printf("Left child of %d is inserted\n",root->data);
        root->left=insertNode(root->left,x);
    }
    else{
        printf("Right child of %d is inserted\n",root->data);
        root->right=insertNode(root->right,x);
    }
    return root;
}
int main(){
    struct node *root;
    root=NULL;
    root=insertNode(root,10);
    root=insertNode(root,5);
    root=insertNode(root,15);
    root=insertNode(root,12);
    root=insertNode(root,90);
    int x=search(15,root);
    
    if(x==0){
        printf("NOt found");
    }
    else{
        printf("Found");
    }
    
}