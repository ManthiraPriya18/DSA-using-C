// Online C compiler to run C program online
#include <stdio.h>
#include <ctype.h>  
char stack[50];
int top=-1;
void push(char temp){
    top++;
    stack[top]=temp;
   
}
char pop(){
    char temp=stack[top];
    top--;
    return temp;
}
int prior(char c){
    if ((c=='*') || (c=='/')){
        return 3;
    }
    else if((c=='+') ||(c=='-')){
        return 2;
    }
    else if(c=='^'){
        return 4;
    }
    else{
        return 1;
    }
}
int main() {
    char in[50];
    char pos[50];
    int j=0;
    scanf("%s",in);
    
    int i=0;
    char temp=in[i];
    while(temp!='\0'){
        char x;
        if(temp=='('){
            push(temp);
        }
        else if(temp==')'){
            while((x=pop())!='('){
                pos[j]=x;
                j++;
            }
            
        }
        else if(isalnum(temp)){
            pos[j]=temp;
            j++;
        }
        else{
            while(top!=-1 && prior(stack[top])>=prior(temp)){
                x=pop();
                pos[j]=x;
                j++;
            }
            push(temp);
        }
        i++;
        temp=in[i];
    }
     while(top!=-1){
            pos[j]=pop();
            j++;
        }
    pos[j]='\0';
    printf("%s",pos);

    return 0;
}