// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    struct node{
        int data;
        struct node *next;
    };
    int c=0;
    int counter=0;
    struct node *head,*temp,*newnode;
    head=NULL;
    while(c==0){
    newnode=(struct node*)malloc(sizeof(struct node));
    if (head==NULL){
        head=newnode;
        temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    printf("enter the data: ");
    scanf("%d",&newnode->data);
    counter++;
    printf("do you want to continue: ");
    scanf("%d",&c);
    
    
}
temp=head;
while (temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("\n");
printf("number of nodes in list: ");
printf("%d",counter);
//reverse a linked list
struct node *prevnode,*currentnode,*nextnode;
prevnode=NULL;
currentnode=head;
nextnode=NULL;
while(currentnode!=NULL){
    nextnode=currentnode->next;
    currentnode->next=prevnode;
    prevnode=currentnode;
    currentnode=nextnode;
    
}
head=prevnode;
printf("\n");
printf("reversed elements ");
printf("\n");
temp=head;
while (temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}

    return 0;
}