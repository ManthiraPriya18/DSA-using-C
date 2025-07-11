// Online C compiler to run C program online
#include <stdio.h>
int r=-1;
int f=-1;
int n=5;
int queue[5];
void fenqueue(int data){
    if(f==-1 && r==-1){
        f++;
        r++;
        queue[f]=data;
    }
    else if ((r + 1) % n == f){
        printf("Queue is full\n");
    }
    else if(f==0){
        f=n-1;
        queue[f]=data;
    }
    else{
        f--;
        queue[f]=data;
    }
}
void renqueue(int data){
    if(f==-1 && r==-1){
        f++;
        r++;
        queue[r]=data;
    }
    else if ((r + 1) % n == f){
        printf("Queue is full\n");
    }
    else if(r==n-1){
        r=0;
        queue[r]=data;
    }
    else{
        r++;
        queue[r]=data;
    }
}
void fdequeue(){
    if(f==-1 && r==-1){
        printf("queue is empty\n");
    }
    else if(f==r){
        f=-1;
        r=-1;
    }
    else if(f==n-1){
        f=0;
    }
    else{
        f++;
    }
}
void rdequeue(){
    if(f==-1 && r==-1){
        printf("queue is empty\n");
    }
    else if(f==r){
        f=-1;
        r=-1;
    }
    else if(r==0){
        r=n-1;
    }
    else{
        r--;
    }
}
void printfront(){
    if(f==-1 && r==-1){
        printf("queue is empty\n");
    }
    else{
        printf("%d\n",queue[f]);
    }
}
void printrear(){
    if(f==-1 && r==-1){
        printf("queue is empty\n");
    }
    else{
        printf("%d\n",queue[r]);
    }
}
void display(){
    int i=f;
    while(i!=r){
        printf("%d ",queue[i]);
        i=(i+1)%n;
    }
    printf("%d",queue[i]);
}
int main() {
    int ch=1;
    while(ch!=0){
        int op;
        printf("enter the operation ");
        scanf("%d",&op);
        if(op==1){
            int x;
            printf("enter the data ");
            scanf("%d",&x);
            fenqueue(x);
        }
        else if(op==2){
            int x;
            printf("enter the data ");
            scanf("%d",&x);
            renqueue(x);
        }
        else if(op==3){
            fdequeue();
        }
        else if(op==4){
            rdequeue();
        }
        else if(op==5){
            printfront();
        }
        else if(op==6){
            printrear();
        }
        else if(op==7){
            display();
        }
        else{
            printf("Invalid\n");
        }
        printf("do you want to continue ");
        scanf("%d",&ch);
    }

    return 0;
}