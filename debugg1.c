#include <stdio.h>
#include <stdlib.h>
int main() {
	int sum=0;
	int A[]={1,2,5,8,9};
	for(int i=0;i<5;i++){
		sum=sum+A[i];
	}
	printf("%d",sum);
	return 0;
}
