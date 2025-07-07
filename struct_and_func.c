#include<stdio.h>
#include<stdlib.h>

struct point{
    int x;
    int y;
};

void printByCopy(struct point p){
    printf("%d %d\n",p.x,p.y);
}

void printByAddress(struct point *p){
    printf("%d %d\n",p->x,p->y);
}

struct point edit(struct point p){ // return a struct
    (p.x)++;
    p.y=p.y+5;
    return p
}

struct point *fun(int a,int b){     //return a pointer to a structure
    struct point *ptr = (struct point *)malloc(sizeof(stuct point));    // why did we create malloc and not just simple
                                                                        // struct point 
                                                                        // because if we create only a struct point it
                                                                        // creates memory in the stack which will get
                                                                        // deallocated once we exit the func
                                                                        // but we need an address of a structure to
                                                                        // return , so we created it using
                                                                        // malloc which creates memory in the heap hence
                                                                        // it will not get deleted once we exit the func
    ptr->x = a;
    ptr->y = b+5;
    return ptr
}

int main(){
    struct point p1 = {23,45};
    struct point p2 = {56,90};
    p1 = edit(p1);
    printByCopy(p1);
    printByAddress(&p2);

    //pointer to a struct

    struct point *ptr1;
    ptr1  = func(2,3);
    printByAddress(ptr);
    free(ptr);
    return 0;
}
