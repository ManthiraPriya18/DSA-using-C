#include <stdio.h>
#include <stdlib.h>
int main() {
   struct node{
       int data;
       struct node *next;
   };
   struct node *newnode,*head,*temp;
   head=NULL;
   int c=1;
   while(c!=0){
       newnode=(struct node*)malloc(sizeof(struct node));
       if(head==NULL){
           head=temp=newnode;
       }
       else{
           temp->next=newnode;
           temp=newnode;
       }
       printf("enter the data ");
       scanf("%d",&newnode->data);
       printf("do you want to continue ");
       scanf("%d",&c);
   }
   temp->next=head;
   temp=head;
   while(temp->next!=head){
       printf("%d ",temp->data);
       temp=temp->next;
   }
   printf("%d \n",temp->data);
printf("%d ",temp->next->data);
    return 0;
}