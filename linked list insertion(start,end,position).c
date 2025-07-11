#include <stdio.h>
#include <stdlib.h>

int main() {
    struct node{
        int data;
        struct node *next;
    };
    struct node *head=NULL,*newnode,*temp;
    int c=0;
    while(c==0){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    
    if (head==NULL){
        head=newnode;
        temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    
    printf("do you want to continue: ");
    scanf("%d",&c);
    }
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    //insertion at first
    int da;
    printf("enter the value to be inserted :");
    scanf("%d",&da);
    newnode=(struct node*)malloc(sizeof(struct node));
    temp=head;
    newnode->next=head;
    newnode->data=da;
    head=newnode;
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    //insert at end
    int er;
    printf("enter the data to be inserted: ");
    printf("\n");
    scanf("%d",&er);
    newnode=(struct node*)malloc(sizeof(struct node));
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->data=er;
    newnode->next=NULL;
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
    //insert at middle position
    int pos, jk;
    printf("enter the position ");
    scanf("%d",&pos);
    printf("enter data to be insert: ");
    scanf("%d",&jk);
    int i=1;
    newnode=(struct node*)malloc(sizeof(struct node));
    temp=head;
    while (pos>i){
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->data=jk;
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    

    return 0;
}