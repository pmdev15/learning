#include<stdio.h>

int add(int a,int b){
    return a+b;
}

int main(){


    int a=2,b=3;
    int (*ptr)(int,int) = &add;
    // or ptr = &add;
    // also ptr = add // because name of the func represents the initial address of the func
                      // also because you are not using & then no need to dereference the pointer
                      // i.e no need to use * just result = ptr(a,b);

    // using func pointer
    int result = *ptr(a,b);
    printf("%d\n",result);

    return 0;
}
