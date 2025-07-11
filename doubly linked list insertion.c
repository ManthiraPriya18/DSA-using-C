// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    struct node{
        int data;
        struct node *prev;
        struct node *next;
    };
    struct node *head,*temp,*tail,*newnode;
    head=NULL;
    int pos;
    int i=1;
    int c=1;
    while(c!=0){
        newnode=(struct node*)malloc(sizeof(struct node));
        if (head==NULL){
            head=tail=newnode;
            newnode->prev=NULL;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        
        printf("enter the data ");
        scanf("%d",&newnode->data);
        printf("do you want to continue ");
        scanf("%d",&c);
    }
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
//insertion at begining
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data \n");
scanf("%d",&newnode->data);
newnode->next=head;
head->prev=newnode;
head=newnode;
temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
//inserion at end
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data \n");
scanf("%d",&newnode->data);
tail->next=newnode;
newnode->prev=tail;
tail=newnode;
temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
//inserting at certain position
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the position ");
printf("\n");
scanf("%d",&pos);
printf("enter the data ");
printf("\n");
scanf("%d",&newnode->data);
temp=head;
while(i<pos-1){
    temp=temp->next;
    i++;
}
newnode->prev=temp;
newnode->next=temp->next;
temp->next->prev=newnode;
temp->next=newnode;
temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }



    return 0;
}