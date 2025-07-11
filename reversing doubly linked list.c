// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    struct node{
        int data;
        struct node *next;
        struct node *prev;
    };
    struct node *head,*tail,*temp,*newnode,*curr;
    int c=1;
    head=NULL;
    while(c!=0){
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->prev=NULL;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            temp=newnode;
            
            
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("enter the data: ");
        scanf("%d",&newnode->data);
        printf("do you want to continue: ");
        scanf("%d",&c);
    }
    tail=temp;
    temp=head;
    printf("elements in the list :");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    //reversing the list
    temp=head;
    while(temp!=NULL){
    curr=temp->next;
    temp->next=temp->prev;
    temp->prev=curr;
    
    temp=temp->prev;
    }
    temp=head;
    head=tail;
    tail=temp;
    printf("printing after reversing :");
    temp=head;
    
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}