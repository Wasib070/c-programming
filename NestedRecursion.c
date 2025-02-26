#include<stdio.h>
int fun(int n){
	if(n>100)
		return n-10;
		else
	    fun(fun(n+11));
        }
int main(){
int z=fun(95);
printf("%d",z);	
return 0;
}
