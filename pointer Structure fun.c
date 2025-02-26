#include<stdio.h>
struct rectangle{
	int length;
	int breadth;
};
struct  rectangle *fun(){

struct  rectangle *p;
p=(struct rectangle *)malloc(sizeof(struct rectangle p));
p->length=10;
p->breadth=10;
return p;
}
int main(){
	int *ptr=fun();
	printf("%d",*ptr);
}

