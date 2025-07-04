#include<stdio.h>

struct car{
    int year;
    char model[20];
};

int main(){
	
	//declaring
	//struct car car1;
	//struct car car2={1998,"Figo"};
	
	//inputing
	// car1.year=2003;
	// car1.model="A8";

	// array of structures
	// struct car c[3];
	// inputing
	// c[i].year=
	// c[i].model=
	
	//pointer to a structure variable
	//
	struct car c = {1989,"chevy"};
	struct car *ptr = &c;
	printf("%d %s\n",ptr->year,ptr->model); //ptr->year is same as 
											// (*ptr).year
    return 0;
}
