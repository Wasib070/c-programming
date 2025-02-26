#include<stdio.h>
#include<stdlib.h>
struct rectangle{
	int length;
	int breadth;
};
int main()
{
	struct rectangle r;
	struct rectangle *p;
p=(struct rectangle*)malloc(sizeof(struct rectangle));
p->breadth=10;
p->length=90;
printf("%d %d",p->breadth,p->length);
	return 0;
}
