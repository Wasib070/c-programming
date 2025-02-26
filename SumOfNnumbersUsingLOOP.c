#include<stdio.h>
int sum(int n){
int i;int sum=0;
for(i=1;i<=n;i++){
sum=sum+i;
}
return sum;	
}
int main(){
	int x=sum(5);
	printf("%d",x);
}
