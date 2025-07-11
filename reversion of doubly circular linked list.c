#include <stdio.h>
#include <stdlib.h>

int main() {
   struct node{
       int data;
       struct node *next,*prev;
   };
   int c=1;
   struct node *head,*tail,*temp,*newnode,*k;
   while(c!=0){
       newnode=(struct node*)malloc(sizeof(struct node));
       printf("enter the data ");
       scanf("%d",&newnode->data);
       if (head==NULL){
           head=tail=newnode;
           newnode->next=newnode;
           newnode->prev=newnode;
       }
       else{
           tail->next=newnode;
           newnode->prev=tail;
           newnode->next=head;
           tail=newnode;
           head->prev=tail;
       }
       printf("do you want to continue ");
       scanf("%d",&c);
   }
   printf("\n");
   temp=head;
   while(temp!=tail){
       printf("%d ",temp->data);
       temp=temp->next;
   }
printf("%d \n",temp->data);
//reversing the list
temp=head;
do{
    k=temp->next;
    temp->next=temp->prev;
    temp->prev=k;
    temp=temp->prev;
}while(temp->next!=head);

temp=head;
head=tail;
tail=temp;
printf("\n");
   temp=head;
   while(temp!=tail){
       printf("%d ",temp->data);
       temp=temp->next;
   }
printf("%d \n",temp->data);
    return 0;
}