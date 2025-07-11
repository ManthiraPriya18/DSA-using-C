#include <stdio.h>
#include <stdlib.h>

int main() {
   struct node{
       int data;
       struct node *next,*prev;
   };
   int c=1;
   struct node *head,*tail,*temp,*newnode;
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
printf("%d\n",head->prev->data);
printf("%d",tail->next->data);
    return 0;
}
