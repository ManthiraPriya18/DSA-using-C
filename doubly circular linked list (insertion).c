// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
    struct node{
        int data;
        struct node *next;
        struct node *prev;
    };
    struct node *head,*tail,*temp,*newnode;
    head=NULL;
    int c=1;
    int pos;
    int i=1;
    while(c!=0){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data ");
        scanf("%d",&newnode->data);
        if (head==NULL){
            head=temp=newnode;
            newnode->next=head;
            newnode->prev=head;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            newnode->next=head;
            head->prev=newnode;
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
//reversing using tail pointer
printf("\n");
printf("After reversing \n");
temp=tail;
while(temp->prev!=tail){
    printf("%d ",temp->data);
    temp=temp->prev;
}
printf("%d",temp->data);
printf("\n");
//insertion at begining
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data ");
scanf("%d",&newnode->data);
newnode->prev=head->prev;
newnode->next=head;
head->prev=newnode;
tail->next=newnode;
head=newnode;
printf("\n");
temp=head;
    while(temp->next!=head){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
printf("\n");
//insertion at end
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data ");
scanf("%d",&newnode->data);
newnode->prev=tail;
newnode->next=tail->next;
tail->next=newnode;
head->prev=newnode;
tail=newnode;
printf("\n");
temp=head;
    while(temp->next!=head){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
    printf("\n");
//inserting at certain position
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter position to be inserted ");
scanf("%d",&pos);
printf("enter the data ");

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
printf("\n");
temp=head;
    while(temp->next!=head){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
    return 0;
}