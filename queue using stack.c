// Online C compiler to run C program online
#include <stdio.h>
int stack1[5];
int stack2[5];
int top1=-1;
int top2=-1;
void push1(int x){
    top1++;
    stack1[top1]=x;
}
void push2(int x){
    top2++;
    stack2[top2]=x;
}
int pop1(){
    int val=stack1[top1];
    top1--;
    return val;
    
}
int pop2(){
    int val=stack2[top2];
    top2--;
    return val;
    
}
void enqueue(int data){
    push1(data);
}
void dequeue(){
    int a;
    while(top1!=-1){
        a=pop1();
    push2(a);
    }
    if (top2 != -1) {
        pop2(); 
    }
    while(top2!=-1){
        a=pop2();
        push1(a);
    }
    
   
}
void display(){
    for(int i=top1;i>=0;i--){
        printf("%d ",stack1[i]);
    }
    printf("\n");
}
int main() {
    int ch=1;
    while(ch!=0){
        int op;
        printf("enter the operation ");
        scanf("%d",&op);
        if(op==1){
            int val;
            printf("Enter data to be added ");
            scanf("%d",&val);
            enqueue(val);
        }
        else if(op==2){
            dequeue();
        }
        else if(op==3){
            display();
        }
        else{
            ch=0;
        }
    }

    return 0;
}