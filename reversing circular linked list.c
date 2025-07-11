#include <stdio.h>
#include <stdlib.h>
int main() {
    struct node{
        int data;
        struct node *next;
    };
    struct node *temp,*tail,*newnode,*prev,*nextnode;
    tail=NULL;
    int c=1;
    int count;
    while(c!=0){
        newnode=(struct node*)malloc(sizeof(struct node));
        
        
        printf("enter the data ");
        scanf("%d",&newnode->data);
        if (tail==NULL){
            tail=newnode;
        
        newnode->next=tail;
        }
        else{
            newnode->next=tail->next;
            tail->next=newnode;
            
            tail=newnode;
        }
        printf("do you want to continue ");
        scanf("%d",&c);
        count++;
    }

temp=tail->next;
while(temp->next!=tail->next){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("%d",temp->data);
//reversing a list
int l=0;
prev=tail;
tail=nextnode=temp=tail->next;

while(l<count){
    nextnode=temp->next;
    temp->next=prev;
    prev=temp;
    temp=nextnode;
    l++;
}
printf("\n");
tail=nextnode;

temp=tail->next;
while(temp->next!=tail->next){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("%d",temp->data);
    return 0;
}