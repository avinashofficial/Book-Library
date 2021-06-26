#include<stdio.h>
int main(){
    int n=4;
    // printf("Enter the value for pattern to print\n");
    // scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j++){
            if(j>=n-1-i && j<=n-1+i){
                printf("*");
            }
            else{
                printf(" "); 
            }

        }
    }
    return 0;
}