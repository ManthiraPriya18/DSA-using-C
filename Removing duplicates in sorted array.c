#include <stdio.h>

int main() {
    int arr[5]={1,1,3,3,6};
    int start=0;
    int end=1;
    while(end<5){
        while(end<5 && arr[end]==arr[start]){
            end++;
        }
        if(end>=5){
            break;
        }
        arr[++start]=arr[end];
        end++;
        
    }
    for(int i=0;i<=start;i++){
        printf("%d ",arr[i]);
    }
    

    return 0;
}