// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    struct node{
        int data;
        struct node *head;
        struct node *prev;
        struct node *next;
    };
    struct node *head,*tail,*temp,*newnode;
int c=1;
int pos;
int i=1;
head=NULL;
while(c!=0){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data ");
    scanf("%d",&newnode->data);
    if(head==NULL){
        head=temp=newnode;
        temp->next=newnode;
        temp->prev=newnode;
    }
    else{
        temp->next=newnode;
        head->prev=newnode;
        newnode->prev=temp;
        newnode->next=head;
        temp=newnode;
    }
    printf("do you want to continue ");
    scanf("%d",&c);
    
}
tail=temp;
temp=head;
while(temp->next!=head){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("%d",temp->data);
//deleting from begining
temp=head;
head=temp->next;
head->prev=temp->prev;
tail->next=temp->next;
free(temp);
printf("\n");
temp=head;
while(temp->next!=head){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("%d",temp->data);
//deleting from end
temp=tail;
tail=tail->prev;
tail->next=head;
head->prev=tail;
free(temp);
printf("\n");
temp=head;
while(temp->next!=head){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("%d",temp->data);
printf("\n");
//deleting from certain position
printf("enter position to be deleted ");
scanf("%d",&pos);
temp=head;
while(i<pos){
    temp=temp->next;
    i++;
}
temp->prev->next=temp->next;
temp->next->prev=temp->prev;
free(temp);
printf("\n");
temp=head;
while(temp->next!=head){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("%d",temp->data);


    return 0;
}