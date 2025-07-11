// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node* create(){
    struct node *newnode;
    int x;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the  node ");
    scanf("%d",&x);
    if(x==-1){
        return NULL;
    }
    newnode->data=x;
    printf("Enter the left child of %d\n",x);
    newnode->left=create();
    printf("Enter the right child of %d\n",x);
    newnode->right=create();
    return newnode;
}
int main() {
    struct node *root;
    root=create();

    return 0;
}