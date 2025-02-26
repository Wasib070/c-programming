#include<stdio.h>
void arr(int A[],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",A[i]);
	}
}
int main(){
	int A[]={1,2,3,4,5,6};
	arr(A,6);
	return 0;
}
