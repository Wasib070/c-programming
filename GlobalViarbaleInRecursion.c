#include<stdio.h>
int x=0;
int func(int n){
	
	if(n>0){
		x++;
		return func(n-1)+x;
	}
	return 0;
}
int main(){
	int x=5;
	int z=func(x);
	printf("%d",z);
}
