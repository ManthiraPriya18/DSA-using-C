// Online C compiler to run C program online
#include <stdio.h>
int n=10;
int stack[10];
int top=-1;
void push(){
    int data;
    if (top>=n-1){
        printf("stack overflow \n");
    }
    else{
    printf("enter the data ");
    scanf("%d",&data);
    top++;
    stack[top]=data;
    }
}
void pop(){
    if(top==-1){
        printf("stack underflow \n");
    }
    
    else{
    top--;
    }
}
void peek(){
    int item;
    item=stack[top];
    printf("%d",item);
    printf("\n");
}
void display(){
    for(int i=top;i>=0;i--){
        printf("%d ",stack[i]);
    }
    printf("\n");
}
int main() {
    
    
    int choice=1;
    int op;
    do{
        printf("what operation you want to perform ");
        scanf("%d",&op);
        if (op==1){
            push();
        }
        else if(op==2){
            pop();
        }
        else if(op==3){
            peek();
        }
        else if(op==4){
            display();
        }
        else{
            printf("invalid");
        }
        printf("do you want to continue ");
        scanf("%d",&choice);
    }while(choice!=0);
    return 0;
}
