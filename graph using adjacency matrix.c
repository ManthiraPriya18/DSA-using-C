// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of vertices: ");
    scanf("%d",&n);
    int adj[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            adj[i][j]=0;
        }
    }
    int s,d;
    while(s!=-1 && d!=-1){
        printf("Enter source from destination: ");
        scanf("%d %d",&s,&d);
        adj[s-1][d-1]=1;
        adj[d-1][s-1]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",adj[i][j]);
        }
        printf("\n");
    }

    return 0;
}