// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
struct node *newnode;
void enqueue(int ele){
    newnode=(struct node*)malloc(sizeof(struct node));
    if(front==NULL && rear==NULL){
        front=rear=newnode;
        newnode->data=ele;
        
    }
    else{
        newnode->data=ele;
        rear->next=newnode;
        rear=newnode;
    }
    newnode->next=front;
}
void dequeue(){
    struct node *temp;
    if(front==NULL && rear==NULL){
        printf("No element in the queue \n");
    }
    else if(front==rear){
        temp=front;
        front=rear=NULL;
        free(temp);
    }
    else{
        temp=front;
        front=front->next;
        rear->next=front;
        free(temp);
    }
}
void peek(){
    if(front==NULL && rear==NULL){
        printf("No element in the queue \n");
    }
    else{
        printf("%d\n",front->data);
    }
}
void display(){
    struct node *temp;
    temp=front;
    if(front==NULL && rear==NULL){
        printf("No element in the queue \n");
    }
    else{
        
        while(temp->next!=front){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d\n",temp->data);
    }
}

int main() {
    int ch=1;
    while(ch!=0){
        int op;
        printf("Enter the operation ");
        scanf("%d",&op);
        if (op==1){
            int ele;
            printf("Enter the data to be added ");
            scanf("%d",&ele);
            enqueue(ele);
        }
        else if(op==2){
            dequeue();
        }
        else if(op==3){
            peek();
        }
        else if(op==4){
            display();
        }
        else{
            printf("Invalid");
        }
        printf("Do you want to continue ");
        scanf("%d",&ch);
    }

    return 0;
}