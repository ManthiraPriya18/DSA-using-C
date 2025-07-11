#include <stdio.h>
#include<stdlib.h>
int main() {
    struct node{
        int data;
        struct node *next,*prev;
    };
    struct node *head,*newnode,*temp;
    head=NULL;
    
    int c=1;
    while(c!=0){
        newnode=(struct node*)malloc(sizeof(struct node));
        if (head==NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("enter the data ");
        scanf("%d",&newnode->data);
        printf("do you want to continue: ");
        scanf("%d",&c);
        
    }
    printf("\n");
    printf("printing using next pointer ");
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    printf("printing using prev pointer ");
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    return 0;
}