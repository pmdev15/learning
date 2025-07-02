#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int min=0,max=0;
        min=n-(n-i);
        max=n-i;
        for(int j=1;j<=n;j++){
            if(j<min || j>max){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
