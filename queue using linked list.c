// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct queue{
    int data;
    struct queue *next;
};
struct queue *front=NULL,*rear=NULL,*temp=NULL,*newnode=NULL;
void enqueue(int element){
    newnode=(struct queue*)malloc(sizeof(struct queue));
    newnode->data=element;
    newnode->next=NULL;
    if (rear==NULL && front==NULL){
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}
void dequeue(){
    if(front==NULL){
        printf("Queue underflow\n");
    }
    else{
        temp=front;
        front=front->next;
        free(temp);
    }
}
void display(){
    if(front==NULL || rear==NULL){
        printf("Queue is empty\n");
    }
    else{
        temp=front;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
void peek(){
    if(front==NULL){
        printf("Queue is empty\n");
    }
    else{
        printf("%d\n",front->data);
    }
}
int main() {
    int ch=0;
    int op;
    while(ch!=1){
        printf("Enter operation ");
        scanf("%d",&op);
        if(op==1){
            int element;
            printf("Enter element to be added ");
            scanf("%d",&element);
            enqueue(element);
        }
        else if(op==2){
            dequeue();
        }
        else if (op==3){
            peek();
        }
        else if(op==4){
            display();
        }
        else{
            printf("Invalid\n");
        }
        printf("Do you want to continue ");
        scanf("%d",&ch);
    }

    return 0;
}