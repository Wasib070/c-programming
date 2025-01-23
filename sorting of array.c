#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a[5],i,j,temp;
	
	for(i=0;i<5;i++){
		printf("Enter Array of elements at index: %d\n",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("sorted Array: ");
	for(i=0;i<5;i++)
	{
		printf("%d \t",a[i]);
	}
	return 0;
}
