#include<stdio.h>
int main(){
	int a=10;
	int *p;
	p=&a;
	printf("accesing value using data vairable =%d",a);
	printf("\naccesing value using pointer vairable =%d",*p);
}
