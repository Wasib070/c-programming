#include<stdio.h>
struct rectangle{
	int l;
	int b;	
};
void fun(struct rectangle *r1){
int x=r1->l*r1->b;
printf(" area =%d",x);
}
int main(){	
struct rectangle r;
r.l=10;
r.b=10;
fun(&r);
}
