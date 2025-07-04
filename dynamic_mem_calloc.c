#include<stdio.h>
#include<stdlib.h>

#define SIZE 3

void printboard(int **board){
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            printf("%d ",board[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int **board;
    board = (int **)calloc(SIZE,sizeof(int));
    if(board=NULL){
        printf("Memory Allocation Failed");
        return 1;
    }
    for(int i=0;i<SIZE;i++){
        board[i]= (int *)calloc(SIZE,sizeof(int));
        if(board[i]=NULL){
            printf("Memory Allocation Failed\n");
            for(int j=0;j<SIZE;j++){
                free(board[j]);
            }
            free(board);
            return 1;
        }
    }
    printboard(board);
    free(board);
    return 0;
}
