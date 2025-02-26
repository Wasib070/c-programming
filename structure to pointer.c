#include<stdio.h>
struct rectangle{
	int length;
	int breadth;
};
int main()
{
	struct rectangle r;
	struct rectangle *p=&r;
	/*this is valid if we initialize after declering pointer of structure p=&r;*/
	p->breadth=15;
	p->length=10;
	printf(" area is %d",p->breadth*p->length);
	return 0;
}
