#include<stdio.h>

const int n=3;
const int m=3;
void input(int *mat[n][m]){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&mat[i][j]);
		}
	}
}

void print(int *mat[n][m]){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d",*mat[i][j]);
		}
	}
}

void addn(){
	int *mat1[n][m]={0};
	int *mat2[n][m]={0};
	input(mat1);
	input(mat2);
	print(mat1);
	print(mat2);
}

int main(){
	addn();
	return 0;
}
