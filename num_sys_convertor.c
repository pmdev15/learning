#include<stdio.h>

#define BIT 8

void binary(int num);

int main(){
	printf("Enter no");
	int num;
	scanf("%d",&num);
	binary(num);
	return 0;
}

void binary(int num){
	int arr[BIT]={0};
	int i=BIT-1;
	while(num>0){
		if(num%2==0){
			arr[i]=0;
		}
		else{
			arr[i]=1;
		}
		num=num/2;
		i--;
		//printf("%d %d\n",ans,num);
	}
	for(int i=0;i<BIT;i++){
		printf("%d",arr[i]);
	}
}

