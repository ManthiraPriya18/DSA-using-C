// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node* findMax(struct node* root){
    if(root==NULL){
        return root;
    }
    if(root->right==NULL){
        return root;
    }
    else{
        root=findMax(root->right);
        return root;
    }
}
struct node* findMin(struct node* root){
    if (root==NULL){
         return root;
    }
    if(root->left==NULL){
      return root;
    }
    else{
        root=findMin(root->left);
        return root;
    }

}
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
struct node* deleteNode(struct node* root,int x){
    if(root==NULL){
        return root;
    }
    if(x<root->data){
        root->left=deleteNode(root->left,x);
    }
    else if(x>root->data){
        root->right=deleteNode(root->right,x);
    }
    else{
        if(root->left==NULL && root->right==NULL){
            free(root);
            root=NULL;
            
        }
        else if(root->left==NULL){
            struct node* temp=root;
            root=root->right;
            free(temp);
            
        }
        else if(root->right==NULL){
            struct node *temp=root;
            root=root->left;
            free(temp);
        }
        else{
            struct node *temp=findMin(root->right);
            root->data=temp->data;
            root->right=deleteNode(root->right,temp->data);
        }
    }
    return root;
}
int main(){
    struct node *root;
    root=NULL;
    root=insertNode(root,10);
    root=insertNode(root,5);
    root=insertNode(root,15);
    root=insertNode(root,3);
    root=insertNode(root,90);
    root=deleteNode(root,15);
    
    int x=search(90,root);
    
    
    if(x==0){
        printf("NOt found\n");
    }
    else{
        printf("Found\n");
    }
    struct node* min=findMin(root);
    printf("%d\n",min->data);
    struct node* max=findMax(root);
    printf("%d\n",max->data);
    
}