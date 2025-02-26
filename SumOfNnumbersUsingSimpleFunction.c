#include<stdio.h>
int sum(int n){
return n*(n+1)/2;	
}
int main(){
	int x=sum(10);
	printf("%d",x);
}
