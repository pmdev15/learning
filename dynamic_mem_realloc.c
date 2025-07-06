#include<stdio.h>
#include<stdlib.h>

int main(){
	int *array = NULL;
	int size = 2;
	int count = 0;
	int input;

	array = (int *)malloc(size*sizeof(int));

	if(array==NULL){
		printf("Failed to Allocate Memory");
		return 1;
	}
	printf("Enter ints\n");
	for(;;){
		scanf("%d",&input);
		if(input==-1) break;
		if(count==size){
			size*=3;
			int *new_buffer = realloc(array,size*sizeof(int));
			if(new_buffer==NULL){
				printf("Memory Allocation Failed\n");
				free(array);
				return 1;
			}
			array = new_buffer;
		}
		array[count++]=input;
	}
	printf("Entered Numbers are\n");
	for(int i=0;i<count;i++){
		printf("%d ",array[i]);
	}
	printf("\n");
	free(array);


	return 0;
}
