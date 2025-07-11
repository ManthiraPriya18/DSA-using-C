// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top=NULL,*temp,*newnode;

void push(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data ");
    scanf("%d",&newnode->data);
    newnode->next=top;
    top=newnode;
}
void pop(){
    if(top==NULL){
        printf("stack is empty");
   }
   else{
    temp=top;
    top=temp->next;
    free(temp);
   }
}
void peek(){
    if(top==NULL){
        printf("stack is empty");
    }
    else{
        printf("%d",top->data);
    }
    printf("\n");
}
void display(){
    temp=top;
    if(temp==NULL){
        printf("empty");
    }
    else{
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    }
    printf("\n");
    
}
int main() {
    int choice=1;
    int ch;
    while(choice!=0){
        printf("enter the operation ");
        scanf("%d",&ch);
        if (ch==1){
            push();
        }
        else if(ch==2){
            pop();
        }
        else if (ch==3){
            peek();
        }
        else if(ch==4){
            display();
        }
        else{
            printf("invalid argument");
        }
        
        printf("Do you want to continue ");
        scanf("%d",&choice);
    }

    return 0;
}