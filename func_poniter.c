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
           //doesnot work     |    // doubt    // also because you are not using & then no need to dereference the pointer
           //                 |  // doubt    // i.e no need to use * just result = ptr(a,b);

    // using func pointer
    int result = ptr(a,b);
    printf("%d\n",result);

    // Application of function pointer
    int (*ptrfunc[4])(int ,int ) = {add,sub};
    printf("enter 0 for addition and 1 for subs\n");
    int choice; 
	printf("enter two number\n");
    scanf("%d %d %d",&choice,&a,&b); // choice 0 = add , 1 = sub
    printf("%d\n",ptrfunc[choice](a,b));


    return 0;
}
