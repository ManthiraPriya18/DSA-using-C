// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
int main() {
    struct node{
        int data;
        struct node *next;
    };
    int c=0;
    int pos;
    struct node *head,*temp,*newnode,*man,*thra;
    while(c==0){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data: ");
    scanf("%d",&newnode->data);
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
printf("elements:");

temp=head;
while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("\n");
//deletion at begining
temp=head;
head=temp->next;
free(temp);
printf("elements deleted at begining: ");
temp=head;
while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("\n");
//deleting element at last
temp=head;
while(temp->next!=NULL){
    man=temp;
    temp=temp->next;
}
man->next=NULL;
free(temp);
printf("element deleted at the end: ");
temp=head;
while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("\n");
//deleting at certain position
printf("enter the position to be deleted: ");
scanf("%d",&pos);
int i=0;
temp=head;
while(i<pos-1){
    thra=temp;
    temp=temp->next;
    i++;
    
}
thra->next=temp->next;
free(temp);
printf("element deleted at certain position: ");
temp=head;
while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}
    return 0;
}