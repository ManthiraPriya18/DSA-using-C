#include <stdio.h>
#include <stdbool.h>

int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            arr[i][j] = 0;
        }
    }
    int dir;
    scanf("%d",&dir);
    for(int i=0;i<dir;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        arr[x][y]=1;
    }
   
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<r;k++){
                if(arr[j][i]==1 && arr[i][k]==1){
                    arr[j][k]=1;
                }
            }
        }
    }
    bool jk=true;
    for(int i=0;i<r;i++){
        
            if(arr[i][i]==1){
                printf("Cycle detected");
                jk=false;
                break;
            }
        
        if (!jk){
            break;
        }
    }
    if (jk){
        printf("No cycle");
    }
    return 0;
}