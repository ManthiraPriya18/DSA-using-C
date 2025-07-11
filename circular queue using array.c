// Online C compiler to run C program online
#include <stdio.h>
#define N 5
int front=-1;
int rear=-1;
int queue[N];
void enqueue(int element){
    if(front==-1 && rear==-1){
        front++;
        rear++;
        queue[rear]=element;
    }
    else if((rear+1)%N==front){
        printf("Queue overflow\n");
    }
    else{
        rear=(rear+1)%N;
        queue[rear]=element;
    }
}
void dequeue(){
    if (front==-1 && rear==-1){
        printf("queue is empty\n");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        front=(front+1)%N;
    }
}
void peek(){
    if (front==-1 && rear==-1){
        printf("queue is empty\n");
    }
    else{
        printf("%d ",queue[front]);
    }
    
}
void display(){
    if (front==-1 && rear==-1){
        printf("queue is empty\n");
    }
    else{
        int i=front;
        while(i!=rear){
            printf("%d ",queue[i]);
            i=(i+1)%N;
        }
        printf("%d",queue[i]);
    }
}
int main() {
    
    int ch=1;
    int op;
    while(ch!=0){
        printf("Enter the operation ");
        scanf("%d",&op);
        if(op==1){
            int element;
            printf("Enter the element to be added ");
            scanf("%d",&element);
            enqueue(element);
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
            printf("Invalid\n");
        }
        printf("Do you want to continue ");
        scanf("%d",&ch);
    }

    return 0;
}