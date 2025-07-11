// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    struct node{
        int data;
        struct node *prev;
        struct node *next;
    };
    struct node *head,*newnode,*temp,*tail;
    head=NULL;
    int c=1;
    int pos;
    int i=1;
    while(c!=0){
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=NULL;
        newnode->prev=NULL;
        if (head==NULL){
            head=temp=tail=newnode;
        }
        else{
            newnode->prev=temp;
            temp->next=newnode;
            temp=newnode;
            tail=newnode;
        }
        printf("enter the data \n");
        scanf("%d",&newnode->data);
        printf("do you want to continue \n");
        scanf("%d",&c);
    }
  printf("data in the list ");  
temp=head;
while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("\n");
printf("deleting at begining :");
//deletion at begining
temp=head;
if(temp->next!=NULL){
temp->next->prev=NULL;
head=head->next;
free(temp);
}

temp=head;
while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("\n");
printf("deleting at end :");
//deletion at end
temp=tail;
if(temp->prev!=NULL){
tail->prev->next=NULL;
tail=tail->prev;
free(temp);
}

temp=head;
while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}

printf("\n");
//deleting from certain position
printf("position to be deleted :");
scanf("%d",&pos);
temp=head;
while(i<pos){
    temp=temp->next;
    i++;
}
if(temp!=NULL && temp->next!=NULL && temp->prev!=NULL){
temp->prev->next=temp->next;
temp->next->prev=temp->prev;
free(temp);
}
printf("\n");
temp=head;
while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}
    return 0;
}