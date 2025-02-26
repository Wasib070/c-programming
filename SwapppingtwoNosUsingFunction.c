#include<stdio.h>
void swap(int *x,int *y){
	int *temp;
	*temp=*x;
	*x=*y;
	*y=*temp;
	}
	int main(){
		int a,b;
		scanf("%d %d",&a,&b);
			printf(" swapping using adress\n");
		
			printf("before swapping a=%d b=%d",a,b);
	    	swap(&a,&b);
		printf("\nafter swapping a=%d b=%d",a,b);
	}