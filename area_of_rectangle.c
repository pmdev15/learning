#include<stdio.h>
#include<stdlib.h>
//#include<maths.h>

struct point{
	int x;
	int y;
};

struct rectangle{
	struct point A;
	struct point B;
};

void area(struct rectangle rec){
	int lenght = abs(rec.A.x-rec.B.x);
	int bredth = abs(rec.A.y-rec.B.y);
	printf("%d\n",lenght*bredth);
}

int main(){
	struct rectangle rec;
	rec.A.x=3,rec.A.y=8;
	rec.B.x=14,rec.B.y=2;
	area(rec);
	return 0;
}
