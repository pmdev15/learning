#include<stdio.h>

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
<<<<<<< HEAD
    return a-b;
=======
	return a-b;
>>>>>>> d10f7bcc4d1256b56732bef6d0a5002c3cc3128e
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

<<<<<<< HEAD
    // Application of function pointer
    int (*ptrfunc[4])(int ,int ) = {add,sub};
    printf("enter 0 for addition and 1 for subs\n");
    int choice; 
	printf("enter two number\n");
    scanf("%d %d %d",&choice,&a,&b); // choice 0 = add , 1 = sub
    printf("%d\n",ptrfunc[choice](a,b));
=======
	int (*ptr2func[2])(int,int) = {add,sub};
	int choice;
	printf("enter 0 for addition and 1 for subs\n");
	scanf("%d\n",&choice);
	printf("enter two number\n");
	scanf("%d %d\n",&a,&b);
	printf("%d\n",ptr2func[choice](a,b));
>>>>>>> d10f7bcc4d1256b56732bef6d0a5002c3cc3128e

    return 0;
}
