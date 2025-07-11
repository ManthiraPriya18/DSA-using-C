// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    struct node{
        int data;
        struct node *next;
    };
    struct node *head = NULL,*newnode,*temp;
    int c=1;
    while(c){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if (head==NULL){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    printf("do you want to continue: \n");
    scanf("%d",&c);
    }
    temp=head;
    printf("Linked list data");
    while (temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}