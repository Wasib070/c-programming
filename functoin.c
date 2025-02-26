#include<stdio.h>
int add(int a,int b){
	int c;
	c=a+b;
	return c;
}
int main(){
	int num1,num2,sum;
	num1=10,num2=20;
	sum=add(num1,num2);
	printf("sum is: %d",sum);
	return 0;
}
