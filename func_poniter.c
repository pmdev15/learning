#include<stdio.h>

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
	return a-b;
}
int main(){


    int a=2,b=3;
    int (*ptr)(int,int) = &add;
    // or ptr = &add;
    // also ptr = add // because name of the func represents the initial address of the func
                      // also because you are not using & then no need to dereference the pointer
                      // i.e no need to use * just result = ptr(a,b);

    // using func pointer
    int result = ptr(a,b);
    printf("%d\n",result);

	int (*ptr2func[2])(int,int) = {add,sub};
	int choice;
	printf("enter 0 for addition and 1 for subs\n");
	scanf("%d\n",&choice);
	printf("enter two number\n");
	scanf("%d %d\n",&a,&b);
	printf("%d\n",ptr2func[choice](a,b));

    return 0;
}
