#include<stdio.h>

int main(){

    int n = 10;
    void *ptr = &n;

    printf("%d\n",*(int *)ptr); // ptr first has been typecasted then derefrenced
                                // we cannot dereference a void pointer directly (ERROR)

    return 0;
}

//      VOID POINTER
//
// void pointer is a pointer with no assoiciated data type 
// it can point to any data type and can be typecasted to any data type
//
//      USE OF VOID POINTER
// malloc and calloc return a void pointer.Due to this reason they can allocate memory for any data type
//
