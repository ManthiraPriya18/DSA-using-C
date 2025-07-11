// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    struct node{
        int data;
        struct node *next;
    };
    struct node *temp,*tail,*newnode;
    tail=NULL;
    int c=1;
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
    }

temp=tail->next;
while(temp->next!=tail->next){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("%d",temp->data);
    return 0;
}