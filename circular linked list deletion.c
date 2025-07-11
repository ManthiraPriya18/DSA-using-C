// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
    struct node{
        int data;
        struct node *next;
    };
    struct node *temp,*tail,*newnode,*fr;
    int c=1;
    int pos;
    tail=NULL;
    while(c!=0){
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=NULL;
        printf("enter the data ");
        scanf("%d",&newnode->data);
        printf("do you want to continue ");
        scanf("%d",&c);
        if (tail==NULL){
        tail=newnode;
        newnode->next=tail;
        }
        else{
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }
    }
    temp=tail->next;
    while(temp->next!=tail->next){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
    //deletion at beginning
    temp=tail->next;
    tail->next=temp->next;
    free(temp);
    printf("\n");
temp=tail->next;
    while(temp->next!=tail->next){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
    //deletion at end
    temp=tail->next;
    while(temp->next!=tail){
        temp=temp->next;
    }
    temp->next=tail->next;
    free(tail);
    tail=temp;
    
    printf("\n");
temp=tail->next;
    while(temp->next!=tail->next){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
    printf("\n");
    //deletion at certain position
    printf("enter position to be deleted ");
    scanf("%d",&pos);
    temp=tail->next;
    int i=1;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    fr=temp->next;
    temp->next=temp->next->next;
    free(fr);
    
    
    printf("\n");
temp=tail->next;
    while(temp->next!=tail->next){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
    return 0;
}