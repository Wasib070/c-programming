#include<stdio.h>
struct rect{
	int l;
	int b;	
};
void fun(struct rect r1){
int x=r1.l*r1.b;
printf(" area =%d",x);
}
int main(){	
struct rect r;
r.l=10;
r.b=10;
fun(r);
}
