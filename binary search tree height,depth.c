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
int FindHeight(struct node* root){
    if(root==NULL){
        return -1;
    }
    int x=FindHeight(root->left);
    int y=FindHeight(root->right);
    return x>y?x+1:y+1;
}
struct node* createNode(int x){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
int FindDepth(struct node* root,int x,int depth){
    if(root==NULL){
        return -1;
    }
    if(root->data==x){
        return depth;
    }
    int left=FindDepth(root->left,x,depth+1);
    if(left!=-1){
        return left;
    }
    return FindDepth(root->right,x,depth+1);
    
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
    root=insertNode(root,23);
    root=insertNode(root,28);
    int depth=FindDepth(root,90,0);
    printf("Depth: %d\n",depth);
    int x=search(90,root);
    int height=FindHeight(root);
    printf("Height: %d\n",height);
    if(x==0){
        printf("NOt found");
    }
    else{
        printf("Found");
    }
}
