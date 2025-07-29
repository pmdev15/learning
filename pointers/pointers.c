#include<stdio.h>

int main(){
	int x=5;
	int *p = &x;
	printf("%d %d\n",p,*p);

	// pointer to an arr
	
	int arr[5] = {1,2,3,4,5};
	int *ptr;
	ptr=arr;

	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++,ptr++){
		printf("%d. %d ",i+1,*ptr);
	}

    // another way pointer to an arr
    int (*pt)[10]; // pt is an pointer pointing to ten integers


	// array of pointers
	// here days is an array of n pointers 
	char *days[] = {
		"MONDAY",
		"TUESDAY",
		"WEDNESDAY",
		"THURSDAY",
		"FRIDAY",
		"SATURDAY",
		"SUNDAY"
	};

	for(int i=0;i<n;i++){
		printf("%s ",days[i]);
	}
    
    // function pointers    
    


	return 0;
}
