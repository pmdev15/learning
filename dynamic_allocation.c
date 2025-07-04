#include<stdio.h>
#include<stdlib.h>

int main(){
    
    //malloc
    //
    //programm :- add arrary elements

    int *array;
    int num_elements;
    int sum=0;

    printf("enter no of elements\n");
    scanf("%d\n ",&num_elements);

    array = (int *)malloc(num_elements * sizeof(int)); // cast malloc as an int pointer 
                                                       // and buffer = num of int  * bytes of one int
    //Fail case
    if(array=NULL){
        printf("Memory Allocation Failed");
        return 1;
    }

    printf("enter %d Integers:\n",num_elements);
    for(int i=0;i<num_elements;i++){
        scanf("%d",&array[i]);
    }

    for(int i=0;i<num_elements;i++){
        sum+=array[i];
    }
    printf("sum of all elements of array is %d\n",sum);

    free(array); // to avoid memory leakage
                 // takes the ptrof our buffer and frees on the heap in our computer

    return 0;
}


// 
// Library :- stdlib.h
//
// malloc() :- Memory Allocation
// calloc() :- Contigous Allocation
// realloc() :- Reallocation
// free() :- Deallocation
//
//malloc()
//
//void *ptr = malloc(size_in_bytes)  // buffer = size_in_bytes
//
//
//calloc() :- initilizes all the buffer memory to zero
//
//void *ptr = calloc(num_elements,size_of_each_elements)
//
//
//
