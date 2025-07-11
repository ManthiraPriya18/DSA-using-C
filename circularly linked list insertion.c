// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    struct node{
        int data;
        struct node *next;
    };
    struct node *tail,*newnode,*temp;
    int c=1;
    int pos;
    tail=NULL;
    while(c!=0){
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=0;
        printf("enter the data ");
        scanf("%d",&newnode->data);
        if (tail==NULL){
        tail=newnode;
        newnode->next=tail;
        }
        else{
            newnode->next=tail->next;
            tail->next=newnode;
            
        }
        
        tail=newnode;
        printf("do you want to continue ");
        scanf("%d",&c);
    }
temp=tail->next;
while(temp->next!=tail->next){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("%d",temp->data);
printf("\n");
//insertion at begining
newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=0;
        printf("enter the data to be entered at begining ");
        scanf("%d",&newnode->data);
        newnode->next=tail->next;
        tail->next=newnode;
        
 temp=tail->next;
while(temp->next!=tail->next){
    printf("%d ",temp->data);
    temp=temp->next;
    
}
printf("%d",temp->data);  
printf("\n");
//insertion at end
newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=0;
        printf("enter the data at end ");
        scanf("%d",&newnode->data);
        newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;
temp=tail->next;
while(temp->next!=tail->next){
    printf("%d ",temp->data);
    temp=temp->next;
    
}
printf("%d",temp->data);
printf("\n");
//inserting at certain position
newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=0;
        printf("enter the data at end ");
        scanf("%d",&newnode->data);
    printf("enter the position to be inserted");
    scanf("%d",&pos);
    int i=1;
    temp=tail->next;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    temp=tail->next;
while(temp->next!=tail->next){
    printf("%d ",temp->data);
    temp=temp->next;
    
}
printf("%d",temp->data);
return 0;
}